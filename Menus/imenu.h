
#ifndef IMENU_H
#define IMENU_H
#include <qobject.h>
#include <QtWidgets>

class IMenu : public QObject
{
public:
    virtual void setupMenu(QMenuBar *menuBar);
    IMenu();
    virtual ~IMenu();
};

#endif // IMENU_H
