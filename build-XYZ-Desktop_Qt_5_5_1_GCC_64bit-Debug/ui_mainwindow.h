/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QCustomPlot *customPlot2;
    QCustomPlot *customPlot4;
    QCustomPlot *customPlot1;
    QCustomPlot *customPlot3;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(686, 551);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        customPlot2 = new QCustomPlot(centralWidget);
        customPlot2->setObjectName(QStringLiteral("customPlot2"));

        gridLayout->addWidget(customPlot2, 0, 1, 1, 1);

        customPlot4 = new QCustomPlot(centralWidget);
        customPlot4->setObjectName(QStringLiteral("customPlot4"));

        gridLayout->addWidget(customPlot4, 1, 1, 1, 1);

        customPlot1 = new QCustomPlot(centralWidget);
        customPlot1->setObjectName(QStringLiteral("customPlot1"));

        gridLayout->addWidget(customPlot1, 0, 0, 1, 1);

        customPlot3 = new QCustomPlot(centralWidget);
        customPlot3->setObjectName(QStringLiteral("customPlot3"));

        gridLayout->addWidget(customPlot3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 686, 22));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
