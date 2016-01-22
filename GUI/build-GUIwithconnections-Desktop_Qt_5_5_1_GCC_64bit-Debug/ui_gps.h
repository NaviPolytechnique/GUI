/********************************************************************************
** Form generated from reading UI file 'gps.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPS_H
#define UI_GPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gps
{
public:

    void setupUi(QWidget *Gps)
    {
        if (Gps->objectName().isEmpty())
            Gps->setObjectName(QStringLiteral("Gps"));
        Gps->resize(400, 300);

        retranslateUi(Gps);

        QMetaObject::connectSlotsByName(Gps);
    } // setupUi

    void retranslateUi(QWidget *Gps)
    {
        Gps->setWindowTitle(QApplication::translate("Gps", "Gps", 0));
    } // retranslateUi

};

namespace Ui {
    class Gps: public Ui_Gps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPS_H
