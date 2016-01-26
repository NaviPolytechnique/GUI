/********************************************************************************
** Form generated from reading UI file 'dronesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRONESETTINGS_H
#define UI_DRONESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DroneSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *pushButton;

    void setupUi(QDialog *DroneSettings)
    {
        if (DroneSettings->objectName().isEmpty())
            DroneSettings->setObjectName(QStringLiteral("DroneSettings"));
        DroneSettings->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(DroneSettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DroneSettings);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));

        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(DroneSettings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DroneSettings);

        QMetaObject::connectSlotsByName(DroneSettings);
    } // setupUi

    void retranslateUi(QDialog *DroneSettings)
    {
        DroneSettings->setWindowTitle(QApplication::translate("DroneSettings", "DroneSettings", 0));
        label->setText(QApplication::translate("DroneSettings", "Drone Settings", 0));
        pushButton->setText(QApplication::translate("DroneSettings", "Set", 0));
    } // retranslateUi

};

namespace Ui {
    class DroneSettings: public Ui_DroneSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRONESETTINGS_H
