#ifndef TABSINIT_H
#define TABSINIT_H
#include "ITabs.h"

class TabsInit : public ITabs
{
private:
    QWidget* createNavigator();
public:
    void initTab(QTabWidget *tabs,int w,int h);
    TabsInit();
    ~TabsInit();
};

#endif // TABSINIT_H
