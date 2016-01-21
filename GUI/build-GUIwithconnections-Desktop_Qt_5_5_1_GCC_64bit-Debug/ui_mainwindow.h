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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *mainlayout;
    QVBoxLayout *layoutvdroite;
    QLabel *logo;
    QHBoxLayout *horizonindicator;
    QHBoxLayout *compass;
    QTabWidget *tabwidget;
    QWidget *map;
    QWidget *attitudes;
    QHBoxLayout *layouthbas;
    QLabel *label_2;
    QVBoxLayout *controls;
    QVBoxLayout *inputcommands;
    QVBoxLayout *eandm;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1083, 781);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mainlayout = new QGridLayout();
        mainlayout->setSpacing(6);
        mainlayout->setObjectName(QStringLiteral("mainlayout"));
        layoutvdroite = new QVBoxLayout();
        layoutvdroite->setSpacing(6);
        layoutvdroite->setObjectName(QStringLiteral("layoutvdroite"));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/logo")));
        logo->setScaledContents(true);

        layoutvdroite->addWidget(logo);

        horizonindicator = new QHBoxLayout();
        horizonindicator->setSpacing(6);
        horizonindicator->setObjectName(QStringLiteral("horizonindicator"));

        layoutvdroite->addLayout(horizonindicator);

        compass = new QHBoxLayout();
        compass->setSpacing(6);
        compass->setObjectName(QStringLiteral("compass"));

        layoutvdroite->addLayout(compass);

        layoutvdroite->setStretch(0, 2);
        layoutvdroite->setStretch(1, 3);
        layoutvdroite->setStretch(2, 3);

        mainlayout->addLayout(layoutvdroite, 0, 1, 1, 1);

        tabwidget = new QTabWidget(centralWidget);
        tabwidget->setObjectName(QStringLiteral("tabwidget"));
        map = new QWidget();
        map->setObjectName(QStringLiteral("map"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        map->setFont(font);
        tabwidget->addTab(map, QString());
        attitudes = new QWidget();
        attitudes->setObjectName(QStringLiteral("attitudes"));
        tabwidget->addTab(attitudes, QString());

        mainlayout->addWidget(tabwidget, 0, 0, 1, 1);

        layouthbas = new QHBoxLayout();
        layouthbas->setSpacing(6);
        layouthbas->setObjectName(QStringLiteral("layouthbas"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        layouthbas->addWidget(label_2);

        controls = new QVBoxLayout();
        controls->setSpacing(6);
        controls->setObjectName(QStringLiteral("controls"));

        layouthbas->addLayout(controls);

        inputcommands = new QVBoxLayout();
        inputcommands->setSpacing(6);
        inputcommands->setObjectName(QStringLiteral("inputcommands"));

        layouthbas->addLayout(inputcommands);


        mainlayout->addLayout(layouthbas, 1, 0, 1, 1);

        eandm = new QVBoxLayout();
        eandm->setSpacing(6);
        eandm->setObjectName(QStringLiteral("eandm"));

        mainlayout->addLayout(eandm, 1, 1, 1, 1);

        mainlayout->setRowStretch(0, 3);
        mainlayout->setRowStretch(1, 1);
        mainlayout->setColumnStretch(0, 6);
        mainlayout->setColumnStretch(1, 2);

        gridLayout_4->addLayout(mainlayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1083, 24));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        logo->setText(QString());
        tabwidget->setTabText(tabwidget->indexOf(map), QApplication::translate("MainWindow", "Tab 1", 0));
        tabwidget->setTabText(tabwidget->indexOf(attitudes), QApplication::translate("MainWindow", "Tab 2", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
