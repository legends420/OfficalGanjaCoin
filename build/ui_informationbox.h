/********************************************************************************
** Form generated from reading UI file 'informationbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONBOX_H
#define UI_INFORMATIONBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_InformationBox
{
public:

    void setupUi(QDialog *InformationBox)
    {
        if (InformationBox->objectName().isEmpty())
            InformationBox->setObjectName(QStringLiteral("InformationBox"));
        InformationBox->resize(761, 511);

        retranslateUi(InformationBox);

        QMetaObject::connectSlotsByName(InformationBox);
    } // setupUi

    void retranslateUi(QDialog *InformationBox)
    {
        InformationBox->setWindowTitle(QApplication::translate("InformationBox", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class InformationBox: public Ui_InformationBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONBOX_H
