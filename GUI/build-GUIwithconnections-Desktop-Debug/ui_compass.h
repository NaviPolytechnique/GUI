/********************************************************************************
** Form generated from reading UI file 'compass.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPASS_H
#define UI_COMPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Compass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *compass;

    void setupUi(QWidget *Compass)
    {
        if (Compass->objectName().isEmpty())
            Compass->setObjectName(QStringLiteral("Compass"));
        Compass->resize(351, 300);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Compass->sizePolicy().hasHeightForWidth());
        Compass->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(Compass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Compass);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        compass = new QVBoxLayout();
        compass->setSpacing(6);
        compass->setObjectName(QStringLiteral("compass"));

        verticalLayout->addLayout(compass);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Compass);

        QMetaObject::connectSlotsByName(Compass);
    } // setupUi

    void retranslateUi(QWidget *Compass)
    {
        Compass->setWindowTitle(QApplication::translate("Compass", "Compass", 0));
        label->setText(QApplication::translate("Compass", "Compass", 0));
    } // retranslateUi

};

namespace Ui {
    class Compass: public Ui_Compass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPASS_H
