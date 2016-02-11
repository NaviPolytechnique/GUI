/********************************************************************************
** Form generated from reading UI file 'rpycontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPYCONTROL_H
#define UI_RPYCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RPYControl
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QDoubleSpinBox *R;
    QLabel *label_2;
    QDoubleSpinBox *P;
    QLabel *label_3;
    QDoubleSpinBox *Y;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QDoubleSpinBox *T;
    QPushButton *pushButton;

    void setupUi(QDialog *RPYControl)
    {
        if (RPYControl->objectName().isEmpty())
            RPYControl->setObjectName(QStringLiteral("RPYControl"));
        RPYControl->resize(258, 198);
        verticalLayout_4 = new QVBoxLayout(RPYControl);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(RPYControl);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(RPYControl);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        R = new QDoubleSpinBox(RPYControl);
        R->setObjectName(QStringLiteral("R"));

        verticalLayout_3->addWidget(R);

        label_2 = new QLabel(RPYControl);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        P = new QDoubleSpinBox(RPYControl);
        P->setObjectName(QStringLiteral("P"));

        verticalLayout_3->addWidget(P);

        label_3 = new QLabel(RPYControl);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        Y = new QDoubleSpinBox(RPYControl);
        Y->setObjectName(QStringLiteral("Y"));

        verticalLayout_3->addWidget(Y);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(RPYControl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        T = new QDoubleSpinBox(RPYControl);
        T->setObjectName(QStringLiteral("T"));

        verticalLayout->addWidget(T);

        pushButton = new QPushButton(RPYControl);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::NoAntialias);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 2);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(RPYControl);

        QMetaObject::connectSlotsByName(RPYControl);
    } // setupUi

    void retranslateUi(QDialog *RPYControl)
    {
        RPYControl->setWindowTitle(QApplication::translate("RPYControl", "RPYControl", 0));
        label_4->setText(QApplication::translate("RPYControl", "RPY Control", 0));
        label->setText(QApplication::translate("RPYControl", "Roll (\302\260)", 0));
        label_2->setText(QApplication::translate("RPYControl", "Pitch (\302\260)", 0));
        label_3->setText(QApplication::translate("RPYControl", "Yaw (\302\260)", 0));
        label_5->setText(QApplication::translate("RPYControl", "Duration", 0));
        pushButton->setText(QApplication::translate("RPYControl", "Send RPY and T", 0));
    } // retranslateUi

};

namespace Ui {
    class RPYControl: public Ui_RPYControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPYCONTROL_H
