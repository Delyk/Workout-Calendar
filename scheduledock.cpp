#include "scheduledock.h"
#include "schedule.h"
#include "datelist.h"
#include <QBoxLayout>
#include <QFile>
#include <QPushButton>
#include <QComboBox>
#include <QObject>
#include <QDialog>
#include <QCalendarWidget>

scheduleDock::scheduleDock(QWidget *parent)
    : QMainWindow{parent}
{
    this->Schedules = new QDockWidget(parent); //Создаём док
    this->Schedules->setAllowedAreas(Qt::LeftDockWidgetArea); //Указываем где он может быть
    this->Schedules->setFeatures(QDockWidget::NoDockWidgetFeatures); //Убираем закрытие и открепление дока
    this->_dir = new Director(this);

    QWidget* dockContainer = new QWidget; //Контейнер для дока
    //Основной горизонтальный слой
    QHBoxLayout* dockMainContainer = new QHBoxLayout(dockContainer);

    QVBoxLayout* buttons = createSchedulesButton();
    QVBoxLayout* list = createDateList();

    dockMainContainer->addLayout(buttons); //Добавляем контейнер для кнопок
    dockMainContainer->addLayout(list); //Добавляем контейнер для списка

    this->Schedules->setWidget(dockContainer); //Устанавливаем контейнер

}

//########## Диалог выбора даты ##############

DateDialog::DateDialog(QWidget* parent):
    BaseDialog(parent) {
    setWindowTitle("Choose Date");
    setWindowFlag(Qt::Dialog);
    setWindowModality(Qt::WindowModal); //Окно забирает управление

    resize(500, 500);

    QBoxLayout *l = new QVBoxLayout();
    QCalendarWidget *calendar = new QCalendarWidget();
    QComboBox *selectTrain = new QComboBox();

    QFile file("plans.json");
    file.open(QIODeviceBase::ReadOnly | QIODeviceBase::Text);
    QByteArray rawJson = file.readAll();
    QJsonDocument trainsData(QJsonDocument::fromJson(rawJson));
    QJsonObject plansList = trainsData.object();

    foreach (const QString &key, plansList.keys()) {
        selectTrain->addItem(key);
    }

    file.close();

    QPushButton *ok = new QPushButton("OK");
    calendar->setGridVisible(true);
    QObject::connect(ok, &QPushButton::clicked,
                     this, &DateDialog::done); //При выборе даты закрываем окно
    this->cal = calendar;
    this->choosingName = selectTrain;
    l->addWidget(cal);
    l->addWidget(choosingName);
    l->addWidget(ok);
    this->setLayout(l);
}

QCalendarWidget* DateDialog::getCalendar() { //Геттер календаря
    return this->cal;
}

void DateDialog::done(int i) { //Перегруженная функци закрытия окна
    emit data(DataPackage(cal->selectedDate(), choosingName->currentText()));
    QDialog::done(i);
}

//########## Диалог создания тренировочки #####

WorkoutDialog::WorkoutDialog(QWidget* parent):BaseDialog(parent) {
    setWindowTitle("New Workout Plan");
    setWindowFlag(Qt::Dialog);
    setWindowModality(Qt::WindowModal);

    resize(500, 500);
    QVBoxLayout *l = new QVBoxLayout;
    QLineEdit *n = new QLineEdit;
    this->text = n;
    QLineEdit *numb = new QLineEdit;
    numb->setValidator(new QIntValidator(0, 10, this));
    this->num = numb;
    this->ok = new QPushButton("OK");
    QObject::connect(ok, &QPushButton::clicked, this, &QDialog::done);

    l->addWidget(text);
    l->addWidget(num);
    l->addWidget(ok);
    this->setLayout(l);
}

void WorkoutDialog::done(int i) {
    emit data(DataPackage(text->text(), num->text().toInt()));
    QDialog::done(i);
}


//########## Mediator #########################

Director::Director(scheduleDock *dock):_dock(dock) {
    this->add = nullptr;
}

void Director::setMainWindows(QMainWindow* w) {
    this->_central = w;
}

void Director::save() {
    wP->saving();
    this->exsL->saving();
}

QPushButton* Director::connectSchedules(schedule* sch) {
    QPushButton* butt = new QPushButton("button");
    QObject::connect(butt, &QPushButton::clicked, sch, &schedule::showList);
    QObject::connect(sch, &schedule::sendList,
                     _dock, QOverload<QList<DateList*>>::of(&scheduleDock::updateList));
    QObject::connect(sch, &schedule::sendThis, _dock, &scheduleDock::changeCurrent);
    return butt;
}

QPushButton* Director::connectSchedules(QString name, exercisesList* sch) {
    QPushButton* butt = new QPushButton(name);
    QObject::connect(butt, &QPushButton::clicked, sch, &schedule::showList);
    QObject::connect(sch, &exercisesList::sendList,
                     _dock, QOverload<QList<ExercisesDateList*>>::of(&scheduleDock::updateList));
    QObject::connect(sch, &schedule::sendThis, _dock, &scheduleDock::changeCurrent);
    return butt;
}

QPushButton* Director::connectSchedules(QString name, workoutPlan* sch) {
    QPushButton* butt = new QPushButton(name);
    QObject::connect(butt, &QPushButton::clicked, sch, &schedule::showList);
    QObject::connect(sch, &workoutPlan::sendList,
                     _dock, QOverload<QList<WorkoutDateList*>>::of(&scheduleDock::updateList));
    QObject::connect(sch, &workoutPlan::sendThis, _dock, &scheduleDock::changeCurrent);
    return butt;
}

QPushButton* Director::connectDateDialog() {
    if(add == nullptr) {
        QPushButton* butt = new QPushButton("Add");
        this->add = butt;
    }
    DateDialog* dD = new DateDialog;
    this->addDialog = dD;

    //Запускаем окно при клике на кнопку
    QObject::connect(add, &QPushButton::clicked, dD, &QDialog::exec);
    //Создаем и посылаем сигнал раписанию для добавления
    QObject::connect(dD, &BaseDialog::data,
                     _dock, &scheduleDock::buildAddSignal);
    return this->add;
}

void Director::changeCentral(QWidget* w) {
    _central->setCentralWidget(w);
}

void Director::changeAddDialog(BaseDialog* dialog) {
        QObject::disconnect(add, &QPushButton::clicked, addDialog, &QDialog::exec);
        QObject::disconnect(addDialog, &BaseDialog::data, _dock, &scheduleDock::buildAddSignal);
        this->addDialog = dialog;
        QObject::connect(add, &QPushButton::clicked, addDialog, &QDialog::exec);
        QObject::connect(addDialog, &BaseDialog::data, _dock, &scheduleDock::buildAddSignal);
}

Director *scheduleDock::getDir() {return this->_dir;}

template<typename T> T* cringe_cast(schedule* ob) {
    if(typeid(*ob) == typeid(T)) {
        return dynamic_cast<T*>(ob);
    }
    return nullptr;
}

//########## Функции док виджета ##############

QDockWidget* scheduleDock::getSchedulesDock() { //Геттер
    return this->Schedules;
}

//Создаём кнопки и подключем их к расписаниям
QVBoxLayout* scheduleDock::createSchedulesButton() {
    //Используем фабрику
    scheduleFactory *factory = new scheduleFactory;
    QVBoxLayout* buttons = new QVBoxLayout;

    _dir->wP = factory->reproduceWorkoutPlan();
    _dir->exsL = factory->reproduceExercisesList();
    _dir->graph = factory->reproduceGraphic();
    //Связываем расписания в цепочку
    _dir->wP->setNext(_dir->exsL)->setNext(_dir->graph);

    currentList = _dir->exsL;

    //При добавлении элемента пользуемся цепочкой обязанностей
    QObject::connect(this, &scheduleDock::returnNewDate,
                     _dir->wP, &schedule::add);

    buttons->addWidget(_dir->connectSchedules("plans", _dir->wP));
    buttons->addWidget(_dir->connectSchedules("days", _dir->exsL));
    // buttons->addWidget(_dir->connectSchedules(_dir->graph));

    buttons->addStretch();
    return buttons;

}

//Поскольку календарь может отправить только дату
//необходимо собирать сигнал в промежуточном  слоте
void scheduleDock::buildAddSignal(DataPackage data) {
    emit returnNewDate(data, currentList);
}

//Получает список и обновляем ListView
void scheduleDock::updateList(QList<ExercisesDateList*> datelist) {
    _dir->changeAddDialog(new DateDialog);
    ExercisesDateListModel *m = new ExercisesDateListModel(datelist);
    _dir->_list->setModel(m);
    auto selectionModel = _dir->_list->selectionModel();
    QObject::connect(selectionModel, &QItemSelectionModel::currentChanged,
            m, &DateListModel::selectionChanged);
    QObject::connect(m, &DateListModel::List,
            _dir, &Director::changeCentral);
}

void scheduleDock::updateList(QList<DateList*> datelist) {}

void scheduleDock::changeCurrent(schedule* s) {
    currentList = s;
}

void scheduleDock::updateList(QList<WorkoutDateList*> datelist) {
    _dir->changeAddDialog(new WorkoutDialog);
    WorkoutDateListModel *m = new WorkoutDateListModel(datelist);
    _dir->_list->setModel(m);
    auto selectionModel = _dir->_list->selectionModel();
    QObject::connect(selectionModel, &QItemSelectionModel::currentChanged,
            m, &WorkoutDateListModel::selectionChanged);
    QObject::connect(m, &WorkoutDateListModel::List,
            _dir, &Director::changeCentral);
}

//Создаём список и кнопку add
QVBoxLayout* scheduleDock::createDateList() {
    QVBoxLayout *list = new QVBoxLayout;
    //Кнопки управления вынесены в отдельную функцию
    list->addLayout(createDateListControls());

    //Задаём модель для представления
    QListView *view = new QListView();
    view->setObjectName("list");

    _dir->_list = view;

    list->addWidget(_dir->_list);

    list->addStretch();
    return list;
}

//Создаём кнопку добавить, а также связываем с ней диалоговое окно
QHBoxLayout* scheduleDock::createDateListControls() {

    QHBoxLayout* controls = new QHBoxLayout;

    // QComboBox *sort = new QComboBox;
    // sort->addItem("sort1");
    // sort->addItem("sort2");
    // sort->addItem("sort3");
    // controls->addWidget(sort);

    controls->addWidget(_dir->connectDateDialog());

    return controls;
}
