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
    QVBoxLayout *verticalLayout;
    QVBoxLayout *Layout;
    QLabel *label;
    QVBoxLayout *attitudemeter;

    void setupUi(QWidget *AttitudeMeter)
    {
        if (AttitudeMeter->objectName().isEmpty())
            AttitudeMeter->setObjectName(QStringLiteral("AttitudeMeter"));
        AttitudeMeter->setEnabled(true);
        AttitudeMeter->resize(351, 300);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AttitudeMeter->sizePolicy().hasHeightForWidth());
        AttitudeMeter->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AttitudeMeter);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Layout = new QVBoxLayout();
        Layout->setSpacing(6);
        Layout->setObjectName(QStringLiteral("Layout"));
        label = new QLabel(AttitudeMeter);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        Layout->addWidget(label);

        attitudemeter = new QVBoxLayout();
        attitudemeter->setSpacing(6);
        attitudemeter->setObjectName(QStringLiteral("attitudemeter"));

        Layout->addLayout(attitudemeter);


        verticalLayout->addLayout(Layout);


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
