/********************************************************************************
** Form generated from reading UI file 'buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Buttons
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *Land;
    QPushButton *Takeoff;
    QPushButton *EmStp;
    QLabel *Flight;
    QGridLayout *gridLayout_2;
    QLabel *System;
    QPushButton *Pilot;
    QPushButton *CbIMU;
    QPushButton *IMU;
    QPushButton *StartAll;
    QPushButton *Kill;

    void setupUi(QDialog *Buttons)
    {
        if (Buttons->objectName().isEmpty())
            Buttons->setObjectName(QStringLiteral("Buttons"));
        Buttons->resize(312, 240);
        verticalLayout = new QVBoxLayout(Buttons);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        Land = new QPushButton(Buttons);
        Land->setObjectName(QStringLiteral("Land"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Land->sizePolicy().hasHeightForWidth());
        Land->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        Land->setFont(font);

        gridLayout->addWidget(Land, 1, 1, 1, 1);

        Takeoff = new QPushButton(Buttons);
        Takeoff->setObjectName(QStringLiteral("Takeoff"));
        sizePolicy.setHeightForWidth(Takeoff->sizePolicy().hasHeightForWidth());
        Takeoff->setSizePolicy(sizePolicy);
        Takeoff->setFont(font);

        gridLayout->addWidget(Takeoff, 1, 0, 1, 1);

        EmStp = new QPushButton(Buttons);
        EmStp->setObjectName(QStringLiteral("EmStp"));
        sizePolicy.setHeightForWidth(EmStp->sizePolicy().hasHeightForWidth());
        EmStp->setSizePolicy(sizePolicy);
        EmStp->setFont(font);

        gridLayout->addWidget(EmStp, 0, 1, 1, 1);

        Flight = new QLabel(Buttons);
        Flight->setObjectName(QStringLiteral("Flight"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Flight->sizePolicy().hasHeightForWidth());
        Flight->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setBold(true);
        font1.setWeight(75);
        Flight->setFont(font1);
        Flight->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Flight, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        System = new QLabel(Buttons);
        System->setObjectName(QStringLiteral("System"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(System->sizePolicy().hasHeightForWidth());
        System->setSizePolicy(sizePolicy2);
        System->setFont(font1);
        System->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(System, 0, 0, 1, 1);

        Pilot = new QPushButton(Buttons);
        Pilot->setObjectName(QStringLiteral("Pilot"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Pilot->sizePolicy().hasHeightForWidth());
        Pilot->setSizePolicy(sizePolicy3);
        Pilot->setFont(font);

        gridLayout_2->addWidget(Pilot, 0, 1, 1, 1);

        CbIMU = new QPushButton(Buttons);
        CbIMU->setObjectName(QStringLiteral("CbIMU"));
        sizePolicy3.setHeightForWidth(CbIMU->sizePolicy().hasHeightForWidth());
        CbIMU->setSizePolicy(sizePolicy3);
        CbIMU->setFont(font);
        CbIMU->setDefault(false);
        CbIMU->setFlat(false);

        gridLayout_2->addWidget(CbIMU, 1, 0, 1, 1);

        IMU = new QPushButton(Buttons);
        IMU->setObjectName(QStringLiteral("IMU"));
        sizePolicy3.setHeightForWidth(IMU->sizePolicy().hasHeightForWidth());
        IMU->setSizePolicy(sizePolicy3);
        IMU->setFont(font);

        gridLayout_2->addWidget(IMU, 1, 1, 1, 1);

        StartAll = new QPushButton(Buttons);
        StartAll->setObjectName(QStringLiteral("StartAll"));
        sizePolicy3.setHeightForWidth(StartAll->sizePolicy().hasHeightForWidth());
        StartAll->setSizePolicy(sizePolicy3);
        StartAll->setFont(font);

        gridLayout_2->addWidget(StartAll, 2, 0, 1, 1);

        Kill = new QPushButton(Buttons);
        Kill->setObjectName(QStringLiteral("Kill"));
        sizePolicy3.setHeightForWidth(Kill->sizePolicy().hasHeightForWidth());
        Kill->setSizePolicy(sizePolicy3);
        Kill->setFont(font);

        gridLayout_2->addWidget(Kill, 2, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 3);

        retranslateUi(Buttons);

        QMetaObject::connectSlotsByName(Buttons);
    } // setupUi

    void retranslateUi(QDialog *Buttons)
    {
        Buttons->setWindowTitle(QApplication::translate("Buttons", "Buttons", 0));
        Land->setText(QApplication::translate("Buttons", "Land", 0));
        Takeoff->setText(QApplication::translate("Buttons", "Take off", 0));
        EmStp->setText(QApplication::translate("Buttons", "Emergency Stop", 0));
        Flight->setText(QApplication::translate("Buttons", "FLIGHT", 0));
        System->setText(QApplication::translate("Buttons", "SYSTEM", 0));
        Pilot->setText(QApplication::translate("Buttons", "Pilot", 0));
        CbIMU->setText(QApplication::translate("Buttons", "Calibrate IMU", 0));
        IMU->setText(QApplication::translate("Buttons", "IMU", 0));
        StartAll->setText(QApplication::translate("Buttons", "Start All", 0));
        Kill->setText(QApplication::translate("Buttons", "Kill", 0));
    } // retranslateUi

};

namespace Ui {
    class Buttons: public Ui_Buttons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
