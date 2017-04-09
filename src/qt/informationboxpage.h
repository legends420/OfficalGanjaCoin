#ifndef INFORMATIONBOXPAGE_H
#define INFORMATIONBOXPAGE_H

#include <QWidget>
#include <QWebView>

namespace Ui {
class InformationBoxPage;
}

class InformationBoxPage : public QWidget
{
    Q_OBJECT

public:
    explicit InformationBoxPage(QWidget *parent = 0);
    ~InformationBoxPage();

private slots:

    void on_tabWidget_2_tabBarClicked(int index);

    void on_pushButton_clicked();

private:
    Ui::InformationBoxPage *ui;
};



#endif // INFORMATIONBOXPAGE_H
