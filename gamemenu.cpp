#include "gamemenu.h"
#include "ui_gamemenu.h"
#include "registration.h"

gameMenu::gameMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameMenu)
{
    ui->setupUi(this);

}

gameMenu::~gameMenu()
{
    delete ui;
}
