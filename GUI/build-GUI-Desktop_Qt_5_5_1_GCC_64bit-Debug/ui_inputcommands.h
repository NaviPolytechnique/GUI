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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputCommands
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *inputcommands;

    void setupUi(QWidget *InputCommands)
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(InputCommands);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(InputCommands);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout);

        inputcommands = new QTextEdit(InputCommands);
        inputcommands->setObjectName(QStringLiteral("inputcommands"));
        inputcommands->setStyleSheet(QLatin1String("color:rgb(23, 233, 15);\n"
"background-color: black;"));

        verticalLayout->addWidget(inputcommands);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(InputCommands);

        QMetaObject::connectSlotsByName(InputCommands);
    } // setupUi

    void retranslateUi(QWidget *InputCommands)
    {
        InputCommands->setWindowTitle(QApplication::translate("InputCommands", "TextInput", 0));
        label->setText(QApplication::translate("InputCommands", "Input Commands", 0));
        pushButton->setText(QApplication::translate("InputCommands", "SEND", 0));
    } // retranslateUi

};

namespace Ui {
    class InputCommands: public Ui_InputCommands {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTCOMMANDS_H
