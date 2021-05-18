#include "gamemenu.h"
#include "ui_gamemenu.h"
#include "registration.h"

gameMenu::gameMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameMenu)
{
    ui->setupUi(this);

}

gameMenu::gameMenu(QString *name, QWidget *parent):
    QDialog(parent),
    ui(new Ui::gameMenu),
    name(name)

{
    ui->setupUi(this);
    ui->nameP->text() = *name;
}


gameMenu::~gameMenu()
{
    delete name;
    delete ui;
}

QString *gameMenu::getName() const
{
    return name;
}

void gameMenu::setName(QString *value)
{
    name = value;
    ui->nameP->text() = *name;
}
