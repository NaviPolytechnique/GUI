/********************************************************************************
** Form generated from reading UI file 'batterygauge.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYGAUGE_H
#define UI_BATTERYGAUGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatteryGauge
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *batterygauge;

    void setupUi(QWidget *BatteryGauge)
    {
        if (BatteryGauge->objectName().isEmpty())
            BatteryGauge->setObjectName(QStringLiteral("BatteryGauge"));
        BatteryGauge->resize(135, 68);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        BatteryGauge->setFont(font);
        verticalLayout_2 = new QVBoxLayout(BatteryGauge);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(BatteryGauge);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        batterygauge = new QProgressBar(BatteryGauge);
        batterygauge->setObjectName(QStringLiteral("batterygauge"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(159, 158, 158, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        batterygauge->setPalette(palette);
        QFont font1;
        font1.setPointSize(15);
        batterygauge->setFont(font1);
        batterygauge->setValue(24);
        batterygauge->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(batterygauge);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BatteryGauge);

        QMetaObject::connectSlotsByName(BatteryGauge);
    } // setupUi

    void retranslateUi(QWidget *BatteryGauge)
    {
        BatteryGauge->setWindowTitle(QApplication::translate("BatteryGauge", "BatteryGauge", 0));
        label->setText(QApplication::translate("BatteryGauge", "Battery", 0));
    } // retranslateUi

};

namespace Ui {
    class BatteryGauge: public Ui_BatteryGauge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYGAUGE_H
