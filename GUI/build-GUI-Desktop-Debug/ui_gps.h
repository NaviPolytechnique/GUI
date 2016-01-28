/********************************************************************************
** Form generated from reading UI file 'gps.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gps
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *gps;

    void setupUi(QWidget *Gps)
    {
        if (Gps->objectName().isEmpty())
            Gps->setObjectName(QStringLiteral("Gps"));
        Gps->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Gps);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gps = new QVBoxLayout();
        gps->setSpacing(6);
        gps->setObjectName(QStringLiteral("gps"));

        verticalLayout_2->addLayout(gps);


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
