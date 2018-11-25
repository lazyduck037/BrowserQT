#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


        QWidget *widget = new QWidget;
        widget->setStyleSheet("background-color: white");
        setCentralWidget(widget);
        //setup menu
        menuPro = new MenuInit();
        menuPro->setupMenu(menuBar());

        //setup main ui
        browserPro = new BrowserInit();


        QTabWidget *tabs = new QTabWidget(widget);
        tabs->setGeometry(0,0,1080,750);

        tabPro = new TabsInit();
        tabPro->configBrowser(browserPro);
        tabPro->initTab(tabs,1080,750);
        QWidget* widgetTab = tabPro->getWidgetTab();


        tabs->addTab(widgetTab,"Tab 1");
        tabs->addTab(new QWidget(),"Tab 2");
        tabs->setContentsMargins(0,0,0,0);


        setWindowTitle(tr("Menus"));
        setMinimumSize(160, 160);
        resize(1080, 750);

}



MainWindow::~MainWindow()
{

    delete menuPro;
    delete browserPro;
    delete tabPro;
    delete ui;
}
