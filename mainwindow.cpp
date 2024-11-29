#include "mainwindow.h"
#include "scheduledock.h"
#include "./ui_mainwindow.h"
#include "topmenu.h"
#include <QLabel>
#include <QCloseEvent>

static scheduleDock *leftDockOfSchedules;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        // Reset the window size
    resize(600,400);
//Menu
    topMenu *Menu = new topMenu(this);
    this->setMenuBar(Menu->getMenu());
//Dock
    leftDockOfSchedules = new scheduleDock(this);
    this->addDockWidget(Qt::LeftDockWidgetArea, leftDockOfSchedules->getSchedulesDock());
    leftDockOfSchedules->getDir()->setMainWindows(this);
//Central
}

MainWindow::~MainWindow()
{
    leftDockOfSchedules->getDir()->save();
    delete ui;
}

