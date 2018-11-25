#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Menus/MenuInit.h"
#include "Tabs/TabsInit.h"
#include "Browser/BrowserInit.h"
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    IMenu *menuPro;
    ITabs *tabPro;
    IBrowser *browserPro;

};

#endif // MAINWINDOW_H
