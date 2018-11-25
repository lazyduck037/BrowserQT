#include "ITabs.h"

ITabs::ITabs()
{

}
ITabs::~ITabs()
{

}

void ITabs::initTab(QTabWidget *tab,int w,int h)
{

}

QWidget* ITabs::getWidgetTab()
{
    return widgetTab;
}

ITabs* ITabs::configBrowser(IBrowser* b)
{
    this->browserPro = b;

}
