/********************************************************************************
** Form generated from reading UI file 'eandm.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EANDM_H
#define UI_EANDM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EandM
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextBrowser *system;
    QLabel *label;
    QTextBrowser *exceptions;

    void setupUi(QDialog *EandM)
    {
        if (EandM->objectName().isEmpty())
            EandM->setObjectName(QStringLiteral("EandM"));
        EandM->resize(309, 272);
        verticalLayout_2 = new QVBoxLayout(EandM);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(EandM);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        system = new QTextBrowser(EandM);
        system->setObjectName(QStringLiteral("system"));
        sizePolicy.setHeightForWidth(system->sizePolicy().hasHeightForWidth());
        system->setSizePolicy(sizePolicy);
        system->setStyleSheet(QLatin1String("color:rgb(23, 233, 15);\n"
"background-color: black;"));

        verticalLayout->addWidget(system);

        label = new QLabel(EandM);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        exceptions = new QTextBrowser(EandM);
        exceptions->setObjectName(QStringLiteral("exceptions"));
        sizePolicy.setHeightForWidth(exceptions->sizePolicy().hasHeightForWidth());
        exceptions->setSizePolicy(sizePolicy);
        exceptions->setStyleSheet(QLatin1String("color:rgb(23, 233, 15);\n"
"background-color: black;"));

        verticalLayout->addWidget(exceptions);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EandM);

        QMetaObject::connectSlotsByName(EandM);
    } // setupUi

    void retranslateUi(QDialog *EandM)
    {
        EandM->setWindowTitle(QApplication::translate("EandM", "EandM", 0));
        label_2->setText(QApplication::translate("EandM", "SYSTEM", 0));
        label->setText(QApplication::translate("EandM", "EXCEPTIONS", 0));
    } // retranslateUi

};

namespace Ui {
    class EandM: public Ui_EandM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EANDM_H
