/********************************************************************************
** Form generated from reading UI file 'attitudemeter.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttitudeMeter
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Layout;
    QLabel *label;
    QVBoxLayout *attitudemeter;

    void setupUi(QWidget *AttitudeMeter)
    {
        if (AttitudeMeter->objectName().isEmpty())
            AttitudeMeter->setObjectName(QStringLiteral("AttitudeMeter"));
        AttitudeMeter->setEnabled(true);
        AttitudeMeter->resize(351, 300);
        verticalLayoutWidget = new QWidget(AttitudeMeter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 351, 301));
        Layout = new QVBoxLayout(verticalLayoutWidget);
        Layout->setSpacing(6);
        Layout->setContentsMargins(11, 11, 11, 11);
        Layout->setObjectName(QStringLiteral("Layout"));
        Layout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        Layout->addWidget(label);

        attitudemeter = new QVBoxLayout();
        attitudemeter->setSpacing(6);
        attitudemeter->setObjectName(QStringLiteral("attitudemeter"));

        Layout->addLayout(attitudemeter);

        Layout->setStretch(0, 1);
        Layout->setStretch(1, 10);
        label->raise();
        verticalLayoutWidget->raise();

        retranslateUi(AttitudeMeter);

        QMetaObject::connectSlotsByName(AttitudeMeter);
    } // setupUi

    void retranslateUi(QWidget *AttitudeMeter)
    {
        AttitudeMeter->setWindowTitle(QApplication::translate("AttitudeMeter", "AttitudeMeter", 0));
        label->setText(QApplication::translate("AttitudeMeter", "Horizon Indicator", 0));
    } // retranslateUi

};

namespace Ui {
    class AttitudeMeter: public Ui_AttitudeMeter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTITUDEMETER_H
