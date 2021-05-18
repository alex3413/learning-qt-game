#include "gamemenu.h"
#include "ui_gamemenu.h"

GameMenu::GameMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameMenu)
{
    ui->setupUi(this);
    connect(ui->exitB, &QPushButton::clicked, [&]{
        close();
    });
}

GameMenu::~GameMenu()
{
    delete ui;
}
