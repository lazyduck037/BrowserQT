#include "BrowserInit.h"

BrowserInit::BrowserInit()
{

}
void BrowserInit::initBrowser(QWidget *parent)
{
    webEngineView = new QWebEngineView(parent);
    webEngineView->page()->profile()->setHttpUserAgent("Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36");
    webEngineView->page()->settings()->setAttribute(QWebEngineSettings::AutoLoadImages, true);
    webEngineView->page()->settings()->setAttribute(QWebEngineSettings::AutoLoadIconsForPage, true);
    webEngineView->load(QUrl("http://google.com.vn"));
}

BrowserInit::~BrowserInit()
{
    delete webEngineView;
}
