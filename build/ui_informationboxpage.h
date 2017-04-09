/********************************************************************************
** Form generated from reading UI file 'informationboxpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONBOXPAGE_H
#define UI_INFORMATIONBOXPAGE_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationBoxPage
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout;
    QWebView *webView;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_4;
    QWebView *webView_3;
    QWidget *tab_6;
    QHBoxLayout *horizontalLayout_3;
    QWebView *webView_2;
    QWidget *tab_7;
    QHBoxLayout *horizontalLayout_5;
    QWebView *webView_4;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *InformationBoxPage)
    {
        if (InformationBoxPage->objectName().isEmpty())
            InformationBoxPage->setObjectName(QStringLiteral("InformationBoxPage"));
        InformationBoxPage->resize(939, 755);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InformationBoxPage->sizePolicy().hasHeightForWidth());
        InformationBoxPage->setSizePolicy(sizePolicy);
        InformationBoxPage->setMaximumSize(QSize(11116666, 16777215));
        InformationBoxPage->setAutoFillBackground(true);
        horizontalLayout_2 = new QHBoxLayout(InformationBoxPage);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget_2 = new QTabWidget(InformationBoxPage);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setAutoFillBackground(false);
        tabWidget_2->setUsesScrollButtons(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_3->sizePolicy().hasHeightForWidth());
        tab_3->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(tab_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        webView = new QWebView(tab_3);
        webView->setObjectName(QStringLiteral("webView"));
        sizePolicy1.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy1);
        webView->setMaximumSize(QSize(16777215, 16777215));
        webView->setLayoutDirection(Qt::LeftToRight);
        webView->setAutoFillBackground(true);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout->addWidget(webView);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setMouseTracking(true);
        tab_4->setAcceptDrops(true);
        tab_4->setAutoFillBackground(true);
        horizontalLayout_4 = new QHBoxLayout(tab_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        webView_3 = new QWebView(tab_4);
        webView_3->setObjectName(QStringLiteral("webView_3"));
        webView_3->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout_4->addWidget(webView_3);

        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayout_3 = new QHBoxLayout(tab_6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        webView_2 = new QWebView(tab_6);
        webView_2->setObjectName(QStringLiteral("webView_2"));
        webView_2->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout_3->addWidget(webView_2);

        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        horizontalLayout_5 = new QHBoxLayout(tab_7);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        webView_4 = new QWebView(tab_7);
        webView_4->setObjectName(QStringLiteral("webView_4"));
        webView_4->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout_5->addWidget(webView_4);

        tabWidget_2->addTab(tab_7, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_6 = new QHBoxLayout(tab);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_7 = new QHBoxLayout(groupBox);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_7->addWidget(pushButton);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        tabWidget_2->addTab(tab, QString());

        horizontalLayout_2->addWidget(tabWidget_2);


        retranslateUi(InformationBoxPage);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InformationBoxPage);
    } // setupUi

    void retranslateUi(QWidget *InformationBoxPage)
    {
        InformationBoxPage->setWindowTitle(QApplication::translate("InformationBoxPage", "Form", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("InformationBoxPage", "News", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("InformationBoxPage", "Updates", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("InformationBoxPage", "Block Explorer", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("InformationBoxPage", "Ganja Chat", 0));
        groupBox->setTitle(QApplication::translate("InformationBoxPage", "Auto Chat Invite", 0));
        label->setText(QApplication::translate("InformationBoxPage", "<html><head/><body><p>All users need to be invited to GanjaChat. </p><p>If you need an invite please click GanjaChat Invite.</p></body></html>", 0));
        pushButton->setText(QApplication::translate("InformationBoxPage", "GanjaChat Invite", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("InformationBoxPage", "Help Section", 0));
    } // retranslateUi

};

namespace Ui {
    class InformationBoxPage: public Ui_InformationBoxPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONBOXPAGE_H
