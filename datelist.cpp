#include "datelist.h"
#include <QLabel>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QErrorMessage>
#include <QTableWidgetItem>
#include <QLayout>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>

DateList::DateList(QDate date, QObject  *parent):
    QObject(parent)
{
    this->_date =  date;
}

QDate DateList::getDate() const {
    return this->_date;
}

void DateList::setDate(QDate date) {
    int *year, *month, *day;
    date.getDate(year, month, day);
    this->_date.setDate(*year, *month, *day);
}

NameLineConnection::NameLineConnection(QString n, int p, int value):name(n), pos(p) {
    line = new QLineEdit;
    QIntValidator *onlyNums = new QIntValidator(0, 999, line);
    line->setValidator(onlyNums);
    line->setText(QString::number(value));
    QObject::connect(line, &QLineEdit::textChanged, this,
                &NameLineConnection::sendEdit);
}

QString NameLineConnection::getName() {
    return this->name;
}

QLineEdit *NameLineConnection::getLine() {
    return this->line;
}

void NameLineConnection::sendEdit(const QString  &name) {
    emit info(this->name, name.toInt(), this->pos);
}

void ExercisesDateList::add(const QString &name, int num, int pos) {
        _tableBuffer[name][pos] = num;
}

void ExercisesDateList::save() {
    QMultiHashIterator<QString, QJsonArray>  i(_tableBuffer);
    while(i.hasNext()) {
        i.next();
        _data[i.key()] = i.value();
    }
}

ExercisesDateList::ExercisesDateList(QDate date, QString name, QObject *parent) : DateList(date, parent), _name(name) {
    _data = {
            {"Name", name}
    };
    QFile file("plans.json");
    file.open(QIODeviceBase::ReadOnly | QIODeviceBase::Text);
    QByteArray rawJson = file.readAll();
    QJsonDocument trainsData(QJsonDocument::fromJson(rawJson));
    QJsonObject plansList = trainsData.object();
    _workoutInfo = plansList.value(name).toObject();
    // qDebug() << _workoutInfo;

    file.close();
    foreach (const QString &key, _workoutInfo.keys()) {
        if(key == "ExerciseCount" || key == "Name") {
            continue;
        }
        QJsonArray tmp;
        for(int i = 0; i < _workoutInfo[key].toInt(); i++) {
            tmp.append(0);
        }
        _tableBuffer[key] = tmp;
    }
}

ExercisesDateList::ExercisesDateList(QDate date, QJsonObject data, QObject *parent):ExercisesDateList(date, data["Name"].toString(), parent) {
    this->_name = data["Name"].toString();
    foreach (const QString& key, data.keys()) {
        if(key != "ExerciseCount" && key != "Name") {
            _tableBuffer[key] = data.value(key).toArray();
        }
        _data[key] = data.value(key);
    };
}

QWidget* ExercisesDateList::getTable() {
    QWidget *table = new QWidget;
    QVBoxLayout *rows = new QVBoxLayout;
    // qDebug() << _tableBuffer;
    foreach (const QString& key, _workoutInfo.keys()) {
        if(key ==  "ExerciseCount" || key == "Name") {
            continue;
        }
        QLabel *name = new QLabel(key);
        QHBoxLayout *row = new QHBoxLayout;
        row->addWidget(name);
        int count = _workoutInfo.value(key).toInt();
        for(int i = 0;i < count; i++) {
            NameLineConnection *newField = new NameLineConnection(key, i, _tableBuffer[key].at(i).toInt());
            QObject::connect(newField, &NameLineConnection::info,
                        this, &ExercisesDateList::add);
            _lines.push_back(newField);
            row->addWidget(newField->getLine());
        }
        rows->addLayout(row);
    }
    QHBoxLayout *delButt = new QHBoxLayout;
    QPushButton *Delete = new QPushButton("Delete");
    QObject::connect(Delete, &QPushButton::clicked, this, &ExercisesDateList::Date);
    delButt->addWidget(Delete);
    delButt->addStretch();
    rows->addLayout(delButt);
    table->setLayout(rows);
    return table;
}

void ExercisesDateList::Date() {
    emit sendDate(this->_date.toString());
}

QJsonObject ExercisesDateList::getData() {
    return _data;
}

QString ExercisesDateList::getName() {
    return this->_name;
}


QWidget* WorkoutDateList::getTable() {
    _view = new QTableWidget(_data["ExerciseCount"].toInt(), 2);
    int i = 0;
    foreach (const QString& key, _data.keys()) {
        if(key == "ExerciseCount" || key == "Name") {
            continue;
        }
        // qDebug() << key << _data.value(key).toString();
        // QTableWidgetItem *test = new QTableWidgetItem(_data.value(key).toString());
        // qDebug() << test->text();
        _view->setItem(i, 0, new QTableWidgetItem(key));
        _view->setItem(i, 1,
                       new QTableWidgetItem(QString::number(_data.value(key).toInt())));
        if(i < _view->rowCount()) {
            i++;
        }

    }
    _view->setEditTriggers(QAbstractItemView::DoubleClicked);
    QObject::connect(_view, &QTableWidget::cellChanged, this, &WorkoutDateList::add);
    QObject::connect(_view, &QTableWidget::cellDoubleClicked, this, &WorkoutDateList::currentTrain);
    QWidget *table  = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;
    QPushButton *Delete = new QPushButton("Delete");
    QObject::connect(Delete, &QPushButton::clicked, this, &WorkoutDateList::Date);
    layout->addWidget(_view);
    layout->addWidget(Delete);
    table->setLayout(layout);
    return table;
}

void WorkoutDateList::Date() {
    emit sendDate(this->getName());
}

void WorkoutDateList::currentTrain(int row, int column) {
    if(column == 0) {
        QTableWidgetItem *i = _view->item(row, column);
        QString curStr;
        if(i) {
            curStr = i->text();
            if(!curStr.isEmpty()) {
                current = curStr;
            }
        }
    }
}

void WorkoutDateList::add(int row, int column) {
    QTableWidgetItem *item = _view->item(row, column);
    QTableWidgetItem *other;
    switch(column) {
    case 0:
        other = _view->item(row, column+1);
        if(other) {
            int num = other->text().toInt();
            if(num) {
                if(!current.isEmpty()) {
                    _data.remove(current);
                    _tableBuffer.remove(current);
                }
                _tableBuffer[item->text()] = other->text();
            } else {
                other->setText("");
            }
        }
        break;
    case 1:
        other = _view->item(row, column-1);
        if(other) {
            int num = item->text().toInt();
            if(num) {
                _tableBuffer[other->text()] = item->text();
            } else {
                item->setText("");
            }
        }
        break;
    }
    // qDebug() << _tableBuffer;
}

void WorkoutDateList::save() {
    QMultiHashIterator<QString, QString> i(_tableBuffer);
    while(i.hasNext()) {
        i.next();
        _data.insert(i.key(), i.value().toInt());
    }
    // qDebug() << _data;
}

WorkoutDateList::WorkoutDateList(QString name, QJsonObject data, QDate date, QObject *parent) : DateList(date, parent) {
    _data = {
        {"Name", name},
    };
    foreach (const QString& key, data.keys()) {
        _data[key] = data.value(key);
    };
}

WorkoutDateList::WorkoutDateList(QString name, int rows, QDate date, QObject *parent) : DateList(date, parent) {
    _data = {
        {"Name", name},
        {"ExerciseCount", rows}
    };
}

QString WorkoutDateList::getName() {
    return this->_data["Name"].toString();
}

QJsonObject WorkoutDateList::getData() {
    return _data;
}


//########## DataPackage ######################

DataPackage::DataPackage(QDate d, QString name):date(d), name(name) {
    rows = 0;
}

DataPackage::DataPackage(QString name, int row):name(name), rows(row) {
    date = date.currentDate();
}

QDate DataPackage::getDate() {
    return this->date;
}

QString DataPackage::getName() {
    return this->name;
}

int DataPackage::getRows() {
    return this->rows;
}


// void WorkoutDateList::addExs(QString name, int c, int row) {
//     QTableWidgetItem *nameOfExs = new QTableWidgetItem(name);
//     QTableWidgetItem *count = new QTableWidgetItem(c);
//     _view->setItem(row, 0, nameOfExs);
//     _view->setItem(row, 1, count);
// }

DateListModel::DateListModel(QObject *parent)
    :QAbstractListModel(parent) {}

DateListModel::DateListModel(QList<DateList*> list, QObject *parent) :
    QAbstractListModel(parent){
    for(int i = 0; i < list.size(); i++) {
        this->_list.push_back(list[i]);
    }
}

QVariant DateListModel::data(const QModelIndex &index,
        int role) const {
    if(index.row() < 0 || index.row() > this->_list.count()) {
        return QVariant();
    }
    if(role == Qt::DisplayRole) {
        return this->_list.at(index.row())->getDate().toString();
    }
    return QVariant();
}

int DateListModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return this->_list.size();
}

QVariant DateListModel::headerData(int section,
        Qt::Orientation orientation, int role) const {
    if(role != Qt::DisplayRole) {
        return QVariant();
    }

    if(orientation == Qt::Vertical) {
        return section;
    }

    switch(role) {
    case Qt::DisplayRole:
        return tr("Schedule");
    }

    return QVariant();
}

Qt::ItemFlags DateListModel::flags(const QModelIndex &index) const {
    Qt::ItemFlags flags = QAbstractListModel::flags(index);

    return flags;
}

void DateListModel::selectionChanged(const QModelIndex &index, const QModelIndex &prev) {
    if(index.isValid()) {
        QLabel* l = new QLabel(_list.at(index.row())->getDate().toString());
        emit List(l);
    }
}

void WorkoutDateListModel::selectionChanged(const QModelIndex &index, const QModelIndex &prev) {
    if(prev.isValid()) {
        _list.at(prev.row())->save();
    }
    if(index.isValid()) {
        emit List(getView(index));
    } else {
        emit List(new QLabel("error"));
    }
}

QVariant WorkoutDateListModel::data(const QModelIndex &index, int role) const {
    if(index.row() < 0 || index.row() > this->_list.count()) {
        return QVariant();
    }
    if(role == Qt::DisplayRole) {
        return this->_list.at(index.row())->getName();
    }
    return QVariant();

}

int WorkoutDateListModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return this->_list.size();
}


QWidget* WorkoutDateListModel::getView(const QModelIndex &index) const {
    return this->_list.at(index.row())->getTable();
}

WorkoutDateListModel::WorkoutDateListModel(QList<WorkoutDateList*> list, QObject *parent) : DateListModel(parent) {
    for(int i = 0; i < list.size(); i++) {
        this->_list.push_back(list[i]);
    }
}


ExercisesDateListModel::ExercisesDateListModel(QList<ExercisesDateList*> list, QObject *parent) : DateListModel(parent) {
    for(int i = 0; i < list.size(); i++) {
        this->_list.push_back(list[i]);
    }
}

QVariant ExercisesDateListModel::data(const QModelIndex &index, int role) const {
    if(index.row() < 0 || index.row() > this->_list.count()) {
        return QVariant();
    }
    if(role == Qt::DisplayRole) {
        ExercisesDateList* info = this->_list.at(index.row());
        QString punkt =  info->getName() + ": " + info->getDate().toString();
        return punkt;
    }
    return QVariant();
}

int ExercisesDateListModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return this->_list.size();
}

QWidget* ExercisesDateListModel::getView(const QModelIndex &index) const {
    return this->_list.at(index.row())->getTable();
}

void ExercisesDateListModel::selectionChanged(const QModelIndex &index, const QModelIndex &prev) {
    if(prev.isValid()) {
        _list.at(prev.row())->save();
    }
    if(index.isValid()) {
        emit List(getView(index));
    }
}
