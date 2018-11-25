#include "TabsInit.h"

TabsInit::TabsInit()
{

}
TabsInit::~TabsInit()
{

}

void TabsInit::initTab(QTabWidget *widgetCenter,int w,int h)
{
//    QTabWidget *tabs = new QTabWidget(widgetCenter);
//    tabs->setGeometry(0,0,w,h);


    widgetTab = new QWidget;
    widgetTab->setGeometry(0,0,w,h);


    QWidget* navigaterWidget = createNavigator();

    browserPro->initBrowser(widgetTab);
    QWebEngineView* browser = browserPro->getWebEngineView();

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(navigaterWidget);
    layout->addWidget(browser);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    widgetTab->setLayout(layout);


//    tabs->addTab(widgetTab1,"Tab 1");
//    tabs->addTab(new QWidget(),"Tab 2");
//    tabs->setContentsMargins(0,0,0,0);

}


QWidget* TabsInit::createNavigator()
{
    QWidget *navigaterWidget = new QWidget;
    navigaterWidget->setGeometry(0,0,1080,30);
    navigaterWidget->setStyleSheet("background-color: red");

    QHBoxLayout *topWidgetLayout = new QHBoxLayout(navigaterWidget);
    QWidget *widget1 = new QWidget;
    widget1->setFixedSize(QSize(28, 28));
    widget1->setStyleSheet("background-color: yellow");
    QWidget *widget2 = new QWidget;
    widget2->setStyleSheet("background-color: white");
    topWidgetLayout->addWidget(widget1);
    topWidgetLayout->addWidget(widget2);
    return navigaterWidget;
}
