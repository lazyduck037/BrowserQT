#ifndef IBROWSER_H
#define IBROWSER_H
#include <QtWidgets>
#include <QWebEngineView>
#include <QWebEngineProfile>
#include <QWebEngineUrlRequestInterceptor>
#include <QWebEngineUrlRequestInfo>
#include <QWebEngineSettings>
class IBrowser
{
protected:
    QWebEngineView* webEngineView;
public:
    virtual void initBrowser(QWidget* parrent);
    QWebEngineView* getWebEngineView();
    IBrowser();

    virtual ~IBrowser();
};

#endif // IBROWSER_H
