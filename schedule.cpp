#include "schedule.h"
#include <QLabel>
#include <QLayout>
#include <QFile>
#include <QList>
#include <QListView>
#include <QJsonDocument>
#include "datelist.h"

//############### Конструкторы ###############

schedule::schedule(QObject *parent):
    QObject(parent), next(nullptr){
}

workoutPlan::workoutPlan(QObject *parent)
    :schedule(parent){

    QFile file("plans.json");
    file.open(QIODeviceBase::ReadOnly | QIODeviceBase::Text);
    QByteArray rawJson = file.readAll();
    plansJsonDoc = QJsonDocument::fromJson(rawJson);
    QJsonObject jsonPlansList  = plansJsonDoc.object();

    foreach (const QString& key, jsonPlansList.keys()) {
        WorkoutDateList *l = new WorkoutDateList(key,
                        jsonPlansList.value(key).toObject());
        QObject::connect(l, &WorkoutDateList::sendDate,
                    this, &workoutPlan::deleteByDate);
        _list.push_back(l);
    }
    file.close();

}

void workoutPlan::saving() {
    QJsonObject root;
    for(auto i : _list) {
        i->save();
        root.insert(i->getName(), i->getData());
    }
    plansJsonDoc.setObject(root);
    QFile file("plans.json");
    file.open(QIODeviceBase::WriteOnly | QIODeviceBase::Text);

    file.write(plansJsonDoc.toJson());

    file.close();
}

void workoutPlan::deleteByDate(QString date) {
    for(int i = 0; i <  _list.size(); i++) {
        if(_list.at(i)->getName() ==  date)  {
            _list.remove(i);
        }
    }
    emit sendList(this->_list);
}

void exercisesList::saving() {
    QJsonObject root;
    for(auto i : _list) {
        i->save();
        root.insert(i->getDate().toString(), i->getData());
    }
    exercisesJsonDoc.setObject(root);
    QFile file("exercises.json");
    file.open(QIODeviceBase::WriteOnly | QIODeviceBase::Text);

    file.write(exercisesJsonDoc.toJson());

    file.close();
}

exercisesList::exercisesList(QObject *parent)
    :schedule(parent){
    QFile file("exercises.json");
    file.open(QIODeviceBase::ReadOnly | QIODeviceBase::Text);
    QByteArray rawJson = file.readAll();
    exercisesJsonDoc = QJsonDocument::fromJson(rawJson);
    QJsonObject jsonExercisesList = exercisesJsonDoc.object();

    foreach (const QString& key, jsonExercisesList.keys()) {
        ExercisesDateList *l = new ExercisesDateList(QDate(QDate::fromString(key)),
                        jsonExercisesList.value(key).toObject());
        QObject::connect(l, &ExercisesDateList::sendDate, this, &exercisesList::deleteByDate);
        _list.push_back(l);
    }
    file.close();
}

void exercisesList::deleteByDate(QString date) {
    for(int i = 0; i <  _list.size(); i++) {
        if(_list.at(i)->getDate().toString() ==  date)  {
            _list.remove(i);
        }
    }
    emit sendList(this->_list);
}

QList<ExercisesDateList*> exercisesList::getList() {
    return this->_list;
}

graphic::graphic(QObject *parent)
    :schedule(parent) {}

//############### Слоты ########################

void schedule::showList() {
    emit sendList(_list);
    emit sendThis(this);
}

void workoutPlan::showList() {
    this->saving();
    emit sendList(_list);
    emit sendThis(this);
}

void exercisesList::showList() {
    this->saving();
    emit sendList(_list);
    emit sendThis(this);
}

void schedule::add(DataPackage data, schedule* request) {
    if(this->next) { //Если дальше есть куда, то перемещаемся по цепочкe
        this->next->add(data, request);
    }

}

void workoutPlan::add(DataPackage data, schedule* request) {
    if(dynamic_cast<workoutPlan*>(request)) { //Если объект расписания каститься
        this->_list.push_back(new WorkoutDateList(data.getName(), data.getRows())); //То вставляем дату
        emit sendList(_list); //Отпарвляем обновлённый список
    } else {
        schedule::add(data, request); //Иначе перемещаемся по цепочке
    }
}

void exercisesList::add(DataPackage data, schedule* request) {
    if(dynamic_cast<exercisesList*>(request)) {
        this->_list.push_back(new ExercisesDateList(data.getDate(), data.getName()));
        emit sendList(_list);
    } else {
        schedule::add(data, request);
    }
}


//############## Функции классов #################

QList<DateList*> schedule::getList() {
    return _list;
}

schedule* schedule::setNext(schedule* n) { //Связываем объекты в цепочку
    this->next = n;
    return n;
}

//############## Фабрика #########################

workoutPlan* scheduleFactory::
    reproduceWorkoutPlan() {
    return new workoutPlan();
};
exercisesList* scheduleFactory::
    reproduceExercisesList() {
    return new exercisesList();
};
graphic* scheduleFactory::reproduceGraphic() {
    return new graphic();
};
