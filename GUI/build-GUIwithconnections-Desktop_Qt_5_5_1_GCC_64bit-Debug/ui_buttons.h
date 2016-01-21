/********************************************************************************
** Form generated from reading UI file 'buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONS_H
#define UI_BUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Buttons
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *IMU;
    QPushButton *EmStp;
    QPushButton *Takeoff;
    QLabel *System;
    QLabel *Flight;
    QPushButton *CbIMU;
    QPushButton *StartAll;
    QPushButton *Pilot;
    QPushButton *Kill;
    QPushButton *Land;

    void setupUi(QDialog *Buttons)
    {
        if (Buttons->objectName().isEmpty())
            Buttons->setObjectName(QStringLiteral("Buttons"));
        Buttons->resize(347, 240);
        gridLayout_2 = new QGridLayout(Buttons);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        IMU = new QPushButton(Buttons);
        IMU->setObjectName(QStringLiteral("IMU"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IMU->sizePolicy().hasHeightForWidth());
        IMU->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        IMU->setFont(font);

        gridLayout->addWidget(IMU, 3, 1, 1, 1);

        EmStp = new QPushButton(Buttons);
        EmStp->setObjectName(QStringLiteral("EmStp"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EmStp->sizePolicy().hasHeightForWidth());
        EmStp->setSizePolicy(sizePolicy1);
        EmStp->setFont(font);

        gridLayout->addWidget(EmStp, 1, 2, 1, 1);

        Takeoff = new QPushButton(Buttons);
        Takeoff->setObjectName(QStringLiteral("Takeoff"));
        sizePolicy1.setHeightForWidth(Takeoff->sizePolicy().hasHeightForWidth());
        Takeoff->setSizePolicy(sizePolicy1);
        Takeoff->setFont(font);

        gridLayout->addWidget(Takeoff, 1, 0, 1, 1);

        System = new QLabel(Buttons);
        System->setObjectName(QStringLiteral("System"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(System->sizePolicy().hasHeightForWidth());
        System->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setBold(true);
        font1.setWeight(75);
        System->setFont(font1);
        System->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(System, 2, 1, 1, 1, Qt::AlignVCenter);

        Flight = new QLabel(Buttons);
        Flight->setObjectName(QStringLiteral("Flight"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Flight->sizePolicy().hasHeightForWidth());
        Flight->setSizePolicy(sizePolicy3);
        Flight->setFont(font1);
        Flight->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Flight, 0, 1, 1, 1, Qt::AlignVCenter);

        CbIMU = new QPushButton(Buttons);
        CbIMU->setObjectName(QStringLiteral("CbIMU"));
        sizePolicy.setHeightForWidth(CbIMU->sizePolicy().hasHeightForWidth());
        CbIMU->setSizePolicy(sizePolicy);
        CbIMU->setFont(font);
        CbIMU->setFlat(false);

        gridLayout->addWidget(CbIMU, 3, 0, 1, 1);

        StartAll = new QPushButton(Buttons);
        StartAll->setObjectName(QStringLiteral("StartAll"));
        sizePolicy.setHeightForWidth(StartAll->sizePolicy().hasHeightForWidth());
        StartAll->setSizePolicy(sizePolicy);
        StartAll->setFont(font);

        gridLayout->addWidget(StartAll, 4, 0, 1, 1);

        Pilot = new QPushButton(Buttons);
        Pilot->setObjectName(QStringLiteral("Pilot"));
        sizePolicy.setHeightForWidth(Pilot->sizePolicy().hasHeightForWidth());
        Pilot->setSizePolicy(sizePolicy);
        Pilot->setFont(font);

        gridLayout->addWidget(Pilot, 3, 2, 1, 1);

        Kill = new QPushButton(Buttons);
        Kill->setObjectName(QStringLiteral("Kill"));
        sizePolicy.setHeightForWidth(Kill->sizePolicy().hasHeightForWidth());
        Kill->setSizePolicy(sizePolicy);
        Kill->setFont(font);

        gridLayout->addWidget(Kill, 4, 1, 1, 1);

        Land = new QPushButton(Buttons);
        Land->setObjectName(QStringLiteral("Land"));
        sizePolicy1.setHeightForWidth(Land->sizePolicy().hasHeightForWidth());
        Land->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Land, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 2);
        gridLayout->setRowStretch(4, 2);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Buttons);

        CbIMU->setDefault(false);


        QMetaObject::connectSlotsByName(Buttons);
    } // setupUi

    void retranslateUi(QDialog *Buttons)
    {
        Buttons->setWindowTitle(QApplication::translate("Buttons", "Buttons", 0));
        IMU->setText(QApplication::translate("Buttons", "IMU", 0));
        EmStp->setText(QApplication::translate("Buttons", "Emergency Stop", 0));
        Takeoff->setText(QApplication::translate("Buttons", "Take off", 0));
        System->setText(QApplication::translate("Buttons", "SYSTEM", 0));
        Flight->setText(QApplication::translate("Buttons", "FLIGHT", 0));
        CbIMU->setText(QApplication::translate("Buttons", "Calibrate IMU", 0));
        StartAll->setText(QApplication::translate("Buttons", "Start All", 0));
        Pilot->setText(QApplication::translate("Buttons", "Pilot", 0));
        Kill->setText(QApplication::translate("Buttons", "Kill", 0));
        Land->setText(QApplication::translate("Buttons", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Buttons: public Ui_Buttons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
