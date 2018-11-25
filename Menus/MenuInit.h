#ifndef MENUINIT_H
#define MENUINIT_H
#include "Menus/imenu.h"


class MenuInit : public IMenu
{
private slots:
    void newFile();
private:
    QMenu *fileMenu;
    QAction *newAct;
    void createActions();
    void createMenus(QMenuBar *menuBar);
public:
    void setupMenu(QMenuBar *menuBar);

    MenuInit();
    ~MenuInit();

};

#endif // MENUINIT_H
