#include "informationboxpage.h"
#include "ui_informationboxpage.h"

#include <QtWebKitWidgets/QWebView>
#include <QUrl>
 #include <QDesktopServices>

InformationBoxPage::InformationBoxPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InformationBoxPage)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("https://www.ganjacoinpro.com/walletupdates/newsupdate.php"));

}

InformationBoxPage::~InformationBoxPage()
{
    delete ui;
}

void InformationBoxPage::on_tabWidget_2_tabBarClicked(int index)
{
    ui->webView_2->load(QUrl("http://169.54.3.62:3001"));
    ui->webView_3->load(QUrl("https://www.ganjacoinpro.com/walletupdates/walletupdates.php"));
    ui->webView_4->load(QUrl("https://ganjacoin.slack.com"));


}

void InformationBoxPage::on_pushButton_clicked()
{
      QDesktopServices::openUrl(QUrl("https://ganjacoin.herokuapp.com", QUrl::TolerantMode));
}
