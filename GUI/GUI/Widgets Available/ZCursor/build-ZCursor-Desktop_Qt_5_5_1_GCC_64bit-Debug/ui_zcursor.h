/********************************************************************************
** Form generated from reading UI file 'zcursor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZCURSOR_H
#define UI_ZCURSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZCursor
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSlider *zslider;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLCDNumber *lcdztarget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLCDNumber *lcdzcurrent;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;

    void setupUi(QWidget *ZCursor)
    {
        if (ZCursor->objectName().isEmpty())
            ZCursor->setObjectName(QStringLiteral("ZCursor"));
        ZCursor->resize(188, 272);
        horizontalLayout_2 = new QHBoxLayout(ZCursor);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        zslider = new QSlider(ZCursor);
        zslider->setObjectName(QStringLiteral("zslider"));
        zslider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(zslider);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(ZCursor);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        lcdztarget = new QLCDNumber(ZCursor);
        lcdztarget->setObjectName(QStringLiteral("lcdztarget"));
        lcdztarget->setFont(font);

        verticalLayout_4->addWidget(lcdztarget);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 6);

        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        label_3 = new QLabel(ZCursor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_5->addWidget(label_3);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 6);

        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(ZCursor);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        lcdzcurrent = new QLCDNumber(ZCursor);
        lcdzcurrent->setObjectName(QStringLiteral("lcdzcurrent"));
        lcdzcurrent->setFont(font);

        verticalLayout_2->addWidget(lcdzcurrent);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 6);

        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_4 = new QLabel(ZCursor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 6);

        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ZCursor);

        QMetaObject::connectSlotsByName(ZCursor);
    } // setupUi

    void retranslateUi(QWidget *ZCursor)
    {
        ZCursor->setWindowTitle(QApplication::translate("ZCursor", "ZCursor", 0));
        label_2->setText(QApplication::translate("ZCursor", "ZTarget", 0));
        label_3->setText(QApplication::translate("ZCursor", "M", 0));
        label->setText(QApplication::translate("ZCursor", "ZCurrent", 0));
        label_4->setText(QApplication::translate("ZCursor", "M", 0));
    } // retranslateUi

};

namespace Ui {
    class ZCursor: public Ui_ZCursor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZCURSOR_H
