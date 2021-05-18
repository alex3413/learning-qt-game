#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QDialog>

namespace Ui {
class GameMenu;
}

class GameMenu : public QDialog
{
    Q_OBJECT

public:
    explicit GameMenu(QWidget *parent = nullptr);
    ~GameMenu();

private:
    Ui::GameMenu *ui;
};

#endif // GAMEMENU_H
