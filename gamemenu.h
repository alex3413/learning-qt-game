#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QDialog>
#include "registration.h"
#include <iostream>

namespace Ui {
class gameMenu;
}

class gameMenu : public QDialog
{
    Q_OBJECT

public:
    explicit gameMenu(QWidget *parent = nullptr);
    ~gameMenu();


private:
    Ui::gameMenu *ui;
};

#endif // GAMEMENU_H
