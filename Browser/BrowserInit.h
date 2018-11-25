#ifndef BROWSERINIT_H
#define BROWSERINIT_H
#include "IBrowser.h"


class BrowserInit : public IBrowser
{

public:
    virtual void initBrowser(QWidget* parrent);
    BrowserInit();
    ~BrowserInit();
};

#endif // BROWSERINIT_H
