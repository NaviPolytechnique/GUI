/********************************************************************************
** Form generated from reading UI file 'attitudemeter.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTITUDEMETER_H
#define UI_ATTITUDEMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttitudeMeter
{
public:

    void setupUi(QWidget *AttitudeMeter)
    {
        if (AttitudeMeter->objectName().isEmpty())
            AttitudeMeter->setObjectName(QStringLiteral("AttitudeMeter"));
        AttitudeMeter->resize(400, 300);

        retranslateUi(AttitudeMeter);

        QMetaObject::connectSlotsByName(AttitudeMeter);
    } // setupUi

    void retranslateUi(QWidget *AttitudeMeter)
    {
        AttitudeMeter->setWindowTitle(QApplication::translate("AttitudeMeter", "AttitudeMeter", 0));
    } // retranslateUi

};

namespace Ui {
    class AttitudeMeter: public Ui_AttitudeMeter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTITUDEMETER_H
