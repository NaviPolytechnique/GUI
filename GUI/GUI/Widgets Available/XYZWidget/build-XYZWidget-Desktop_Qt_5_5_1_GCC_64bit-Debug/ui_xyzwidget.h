/********************************************************************************
** Form generated from reading UI file 'xyzwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_XyzWidget
{
public:
    QWidget *centralWidget;
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
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XyzWidget->sizePolicy().hasHeightForWidth());
        XyzWidget->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(XyzWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 451, 361));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        customPlot2 = new QCustomPlot(centralWidget);
        customPlot2->setObjectName(QStringLiteral("customPlot2"));

        gridLayout->addWidget(customPlot2, 0, 1, 1, 1);

        customPlot1 = new QCustomPlot(centralWidget);
        customPlot1->setObjectName(QStringLiteral("customPlot1"));

        gridLayout->addWidget(customPlot1, 0, 0, 1, 1);

        customPlot3 = new QCustomPlot(centralWidget);
        customPlot3->setObjectName(QStringLiteral("customPlot3"));

        gridLayout->addWidget(customPlot3, 1, 0, 1, 1);

        customPlot4 = new QCustomPlot(centralWidget);
        customPlot4->setObjectName(QStringLiteral("customPlot4"));

        gridLayout->addWidget(customPlot4, 1, 1, 1, 1);


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
