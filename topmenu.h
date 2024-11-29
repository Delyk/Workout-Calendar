#ifndef TOPMENU_H
#define TOPMENU_H

#include <QMainWindow>

class topMenu : public QMainWindow //Класс представляющий собой верхнее меню
{
    Q_OBJECT
    QMenuBar *menu;
    QMenu *mainMenu;
public:
    explicit topMenu(QWidget *parent = nullptr);
    QMenuBar* getMenu();

signals:
};

#endif // TOPMENU_H
