#include "MenuInit.h"

MenuInit::MenuInit()
{

}
void MenuInit::newFile()
{
    qDebug("new file");
}

void MenuInit::setupMenu(QMenuBar *menuBar)
{
    createActions();
    createMenus(menuBar);
}

void MenuInit::createActions()
{
    newAct = new QAction(tr("New"), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Create a new file"));
    QObject::connect(newAct,&QAction::triggered, this ,&MenuInit::newFile);
}

void MenuInit::createMenus(QMenuBar *menuBar)
{
    fileMenu = menuBar->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addSeparator();
}


MenuInit::~MenuInit()
{
    delete newAct;
}
