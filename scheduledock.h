#ifndef SCHEDULEDOCK_H
#define SCHEDULEDOCK_H

#include <QDockWidget>
#include <QMainWindow>
#include <QLayout>
#include <QListView>
#include <QPushButton>
#include <QDialog>
#include <QDate>
#include <QCalendarWidget>
#include <QMainWindow>
#include <QLineEdit>
#include <QComboBox>
#include "datelist.h"
#include "schedule.h"

//############ Mediator #########################

class scheduleDock;
class BaseDialog;

class Director : public QObject{
    Q_OBJECT;
    friend class scheduleDock;
    workoutPlan *wP;
    exercisesList *exsL;
    graphic *graph;
    QPushButton* add;
    QListView* _list;
    scheduleDock* _dock;
    QMainWindow* _central;
    BaseDialog* addDialog;
public:
    Director(scheduleDock* dock);
    QPushButton* connectSchedules(QString name, workoutPlan* sch);
    QPushButton* connectSchedules(QString name, exercisesList* sch);
    QPushButton* connectSchedules(schedule* sch);
    QPushButton* connectDateDialog();
    void changeAddDialog(BaseDialog* dialog);
    template<typename T> T* cringe_cast(schedule* ob);

    void setMainWindows(QMainWindow*);

public slots:
    void save();
    void changeCentral(QWidget*);

};

class DataPackage;

//########### Dock ##############################

class scheduleDock : public QMainWindow
{
    Q_OBJECT;
    QDockWidget* Schedules;
    Director *_dir;
    schedule *currentList;


    //Набор методов для создания дока (вызываются в конструкторе)
    QVBoxLayout* createSchedulesButton();
    QVBoxLayout* createDateList();
    QHBoxLayout* createDateListControls();
public:
    explicit scheduleDock(QWidget *parent = nullptr);

    //Геттер дока
    QDockWidget* getSchedulesDock();
    Director* getDir();

public slots:
    void buildAddSignal(DataPackage data); //Создаём сигнал на добавление
    void updateList(QList<ExercisesDateList*> datelist); //Перерисовываем ListView
    void updateList(QList<WorkoutDateList*> datelist);
    void updateList(QList<DateList*> datelist);
    void changeCurrent(schedule* s);

signals:
    void returnNewDate(DataPackage, schedule*); //Отправляем данные на добавление
};

//############ Диалог выбора даты ###############

class BaseDialog : public QDialog {
    Q_OBJECT
public:
    BaseDialog(QWidget *parent = nullptr) : QDialog(parent) {}
signals:
        void data(DataPackage);
};

class DateDialog : public BaseDialog{

    Q_OBJECT
    QCalendarWidget* cal;
    QComboBox* choosingName;
public:
    DateDialog(QWidget *parent = nullptr);
    QCalendarWidget* getCalendar();
public slots:
    // void getDate();
    virtual void done(int) override; //Перегружаем функцию закрытия диалога

};

//########### Диалог создания расписания ########

class WorkoutDialog : public BaseDialog {
    Q_OBJECT
    QLineEdit* text;
    QLineEdit* num;
    QPushButton* ok;
public:
    WorkoutDialog(QWidget *parent = nullptr);
    QLineEdit* getText();
    QLineEdit* getNumberText();
public slots:
    void done(int) override;

};

#endif // SCHEDULEDOCK_H
