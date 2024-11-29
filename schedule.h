#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <QWidget>
#include <QListView>
#include <QJsonDocument>
#include "datelist.h"

//################################################################################################


class schedule : public QObject//Базовый класс для расписаний, наследник от QObject
{
    Q_OBJECT;
    schedule* next;
    QList<DateList*> _list;
protected:

    explicit schedule(QObject * = nullptr); //Конструктор передаёт parent конструктору QObject
public:
    QList<DateList*> getList();
    schedule* setNext(schedule*); //Функция связывания в цепочку
public slots:
    virtual void showList(); //Слот, получает слой со списком и отрисовывает список
    virtual void add(DataPackage, schedule*); //Слот добавления элемента
    virtual void deleteByDate(QString date) {};

signals:
    void sendList(QList<DateList*> datelist);
    void sendThis(schedule* sch);
};

//################################################################################################

class workoutPlan : public schedule { //Класс хранящий планы тренировок
    Q_OBJECT
    QList<WorkoutDateList*> _list;
    QJsonDocument plansJsonDoc;


public:
    explicit workoutPlan(QObject * = nullptr);
    void saving();

public slots:
    void showList() override;
    void deleteByDate(QString date) override ;
    void add(DataPackage, schedule*) override;
signals:
    void sendList(QList<WorkoutDateList*> datelist);
};

//################################################################################################

class exercisesList : public schedule { //Класс хранящий результаты тренировок
    Q_OBJECT
    QList<ExercisesDateList*> _list;
    QJsonDocument exercisesJsonDoc;

public:
    explicit exercisesList(QObject * = nullptr);
    void saving();
    QList<ExercisesDateList*> getList();

public slots:
    void deleteByDate(QString date) override;
    void showList() override;
    void add(DataPackage, schedule*) override;
signals:
    void sendList(QList<ExercisesDateList*> datelist);
};

//################################################################################################

class graphic : public schedule { //Класс рисующий график основываясь на результатах тренировок
    Q_OBJECT

public:
    explicit graphic(QObject * = nullptr);

public slots:
    void add(DataPackage, schedule*) override {};
signals:
};

//################################################################################################

class scheduleFactory { //Абстрактная фабрика для быстрого создания всех классов
public:
    virtual workoutPlan* reproduceWorkoutPlan();
    virtual exercisesList* reproduceExercisesList();
    virtual graphic* reproduceGraphic();
};

#endif // SCHEDULE_H

