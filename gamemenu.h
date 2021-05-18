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
             gameMenu(QString *name, QWidget *parent = nullptr);
    ~gameMenu();

             QString *getName() const;
             void setName(QString *value);

    private:
             Ui::gameMenu *ui;
             QString *name;
    };

#endif // GAMEMENU_H
