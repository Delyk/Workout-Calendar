#ifndef DATELIST_H
#define DATELIST_H

#include <QObject>
#include <QDate>
#include <QAbstractListModel>
#include <QModelIndex>
#include <QLineEdit>
#include <QVariant>
#include <QLayout>
#include <QTableWidget>
#include <QJsonObject>
#include <QJsonArray>

class DateList : public QObject {
    Q_OBJECT;
protected:
    QDate  _date;
public:
    DateList(QDate date, QObject  *parent =  nullptr);
    DateList(const DateList *dL);

    QDate getDate() const;
    void setDate(QDate date);
public slots:
    virtual void add(int row, int column) {};
    virtual void Date() {};
signals:
    void sendDate(QString date);

};

class NameLineConnection;

class ExercisesDateList : public DateList {
    Q_OBJECT
    QJsonObject _data;
    QJsonObject _workoutInfo;
    QString _name;
    QList<NameLineConnection*> _lines;
    QMultiHash<QString, QJsonArray> _tableBuffer;
public:
    ExercisesDateList(QDate date, QString name, QObject *parent = nullptr);
    ExercisesDateList(QDate date, QJsonObject data, QObject *parent = nullptr);
    QWidget* getTable();
    QJsonObject getData();
    QString getName();
    void save();
public slots:
    void Date() override;
    void add(const QString &name, int num, int pos);

};

    class NameLineConnection : public QObject {
            Q_OBJECT;
            QString name;
            QLineEdit *line;
            int pos;
            friend class ExercisesDateList;
        public:
            NameLineConnection(QString n, int p, int value = 0);
            QString getName();
            QLineEdit *getLine();
        public slots:
            void sendEdit(const QString &text);
        signals:
            void info(const QString &name, int num, int pos);
    };

class WorkoutDateList : public DateList {
    Q_OBJECT;
    QJsonObject _data;
    QTableWidget *_view;
    QString current;
    QMultiHash<QString, QString> _tableBuffer;
public:
    WorkoutDateList(QString name, QJsonObject data, QDate date = QDate::currentDate(), QObject *parent = nullptr);
    WorkoutDateList(QString name, int rows, QDate date = QDate(), QObject *parent = nullptr);
    QWidget* getTable();
    QString getName();
    QJsonObject getData();
    void save();
public slots:
    void Date() override;
    void currentTrain(int row, int column);
    void add(int row, int column) override;

};

//############ Класс для хранения данных ########

class DataPackage {
    QDate date;
    int rows;
    QString name;
public:
    DataPackage(QDate d, QString name);
    DataPackage(QString name, int rows);
    QDate getDate();
    int getRows();
    QString getName();
};


class DateListModel : public QAbstractListModel//Хранит все данные одной тренировки, сохраняет в JSON, отдаёт данные
{
    QList<DateList*> _list;
    Q_OBJECT;
public:
    enum Roles {
        ListRole = Qt::UserRole+1
    };
    explicit DateListModel(QObject *parent = nullptr);
    explicit DateListModel(QList<DateList*> list, QObject *parent = nullptr);

    virtual QVariant data(const QModelIndex &index,
            int role = Qt::DisplayRole) const override;


    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant headerData(int section,
                Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const override;

    Qt::ItemFlags flags(const QModelIndex &index) const override;
public slots:
    virtual void selectionChanged(const QModelIndex &index, const QModelIndex &prev);
    virtual void currentChanged(const QModelIndex &current,
                        const QModelIndex &previous){};

signals:
    void List(QWidget *l);
};

class WorkoutDateListModel : public DateListModel {
    QList<WorkoutDateList*> _list;
    Q_OBJECT;
public:
    explicit WorkoutDateListModel(QList<WorkoutDateList*> list, QObject *parent = nullptr);
    QVariant data(const QModelIndex &index, int role  = Qt::DisplayRole) const override;
    QWidget* getView(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
public slots:
    void selectionChanged(const QModelIndex &index, const QModelIndex &prev) override;
};

class ExercisesDateListModel : public DateListModel {
    QList<ExercisesDateList*> _list;

    Q_OBJECT;
public:
    ExercisesDateListModel(QList<ExercisesDateList*> list, QObject *parent = nullptr);
    QVariant data(const QModelIndex &index, int role  = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QWidget* getView(const QModelIndex &index) const;
public slots:
    void selectionChanged(const QModelIndex &index, const QModelIndex &prev) override;
};

#endif // DATELIST_H
