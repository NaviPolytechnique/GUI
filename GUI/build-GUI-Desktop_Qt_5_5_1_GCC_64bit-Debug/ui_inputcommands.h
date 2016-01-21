/********************************************************************************
** Form generated from reading UI file 'inputcommands.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTCOMMANDS_H
#define UI_INPUTCOMMANDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InputCommands
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *inputcommands;

    void setupUi(QDialog *InputCommands)
    {
        if (InputCommands->objectName().isEmpty())
            InputCommands->setObjectName(QStringLiteral("InputCommands"));
        InputCommands->resize(345, 246);
        verticalLayout_2 = new QVBoxLayout(InputCommands);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InputCommands);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        inputcommands = new QTextEdit(InputCommands);
        inputcommands->setObjectName(QStringLiteral("inputcommands"));
        inputcommands->setStyleSheet(QLatin1String("color:rgb(23, 233, 15);\n"
"background-color: black;"));

        verticalLayout->addWidget(inputcommands);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(InputCommands);

        QMetaObject::connectSlotsByName(InputCommands);
    } // setupUi

    void retranslateUi(QDialog *InputCommands)
    {
        InputCommands->setWindowTitle(QApplication::translate("InputCommands", "TextInput", 0));
        label->setText(QApplication::translate("InputCommands", "INPUT COMMANDS", 0));
    } // retranslateUi

};

namespace Ui {
    class InputCommands: public Ui_InputCommands {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTCOMMANDS_H
