/********************************************************************************
** Form generated from reading UI file 'xyzwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XYZWIDGET_H
#define UI_XYZWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "WidgetsUsed/XYZWidget/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_XyzWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCustomPlot *customPlot2;
    QCustomPlot *customPlot1;
    QCustomPlot *customPlot3;
    QCustomPlot *customPlot4;

    void setupUi(QWidget *XyzWidget)
    {
        if (XyzWidget->objectName().isEmpty())
            XyzWidget->setObjectName(QStringLiteral("XyzWidget"));
        XyzWidget->resize(444, 352);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XyzWidget->sizePolicy().hasHeightForWidth());
        XyzWidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(XyzWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        customPlot2 = new QCustomPlot(XyzWidget);
        customPlot2->setObjectName(QStringLiteral("customPlot2"));

        gridLayout->addWidget(customPlot2, 0, 1, 1, 1);

        customPlot1 = new QCustomPlot(XyzWidget);
        customPlot1->setObjectName(QStringLiteral("customPlot1"));

        gridLayout->addWidget(customPlot1, 0, 0, 1, 1);

        customPlot3 = new QCustomPlot(XyzWidget);
        customPlot3->setObjectName(QStringLiteral("customPlot3"));

        gridLayout->addWidget(customPlot3, 1, 0, 1, 1);

        customPlot4 = new QCustomPlot(XyzWidget);
        customPlot4->setObjectName(QStringLiteral("customPlot4"));

        gridLayout->addWidget(customPlot4, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(XyzWidget);

        QMetaObject::connectSlotsByName(XyzWidget);
    } // setupUi

    void retranslateUi(QWidget *XyzWidget)
    {
        XyzWidget->setWindowTitle(QApplication::translate("XyzWidget", "XyzWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class XyzWidget: public Ui_XyzWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XYZWIDGET_H
