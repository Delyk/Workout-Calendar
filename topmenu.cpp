#include "topmenu.h"
#include <QMenuBar>
#include <QApplication>

topMenu::topMenu(QWidget *parent)
    : QMainWindow{parent}
{
    this->menu = new QMenuBar(parent); //Создаём объект меню
    mainMenu = menu->addMenu("Menu"); //Добавляем пункт на панель
    //Добавляем пункты меню
    QAction *quit = new QAction("Quit", this);
    // mainMenu->addAction("New Profile");
    // mainMenu->addAction("Open Profile");
    // mainMenu->addSeparator();
    // mainMenu->addAction("Save");
    // mainMenu->addAction("Save As...");
    // mainMenu->addSeparator();
    // mainMenu->addAction("Import JSON...");
    // mainMenu->addAction("Export JSON...");
    // mainMenu->addSeparator();
    mainMenu->addAction(quit);
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}

QMenuBar* topMenu::getMenu() {
    return this->menu;
}
