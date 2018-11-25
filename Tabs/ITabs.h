#ifndef ITABS_H
#define ITABS_H
#include <QtWidgets>
#include "../Browser/IBrowser.h"
class ITabs
{
protected:
     IBrowser* browserPro;
     QWidget *widgetTab;
public:
    virtual void initTab(QTabWidget *tab,int w,int h);
    ITabs* configBrowser(IBrowser *browser);
    QWidget *getWidgetTab();

    ITabs();
    virtual ~ITabs();
};

#endif // ITABS_H
