/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
    QHBoxLayout *controls;
    QHBoxLayout *inputcommands;
    QTabWidget *tabwidget;
    QWidget *tabmap;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *map;
    QWidget *tabattitudes;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *graphs;
    QHBoxLayout *layouthbas;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *RPYControl;
    QHBoxLayout *battery;
    QVBoxLayout *horizonindicator;
    QVBoxLayout *compass;
    QVBoxLayout *zcursor;
    QVBoxLayout *eandm;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1083, 781);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/navi_the_guardian_fairy_by_bjorny.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
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
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        logo->setScaledContents(true);

        layoutvdroite->addWidget(logo);

        controls = new QHBoxLayout();
        controls->setSpacing(6);
        controls->setObjectName(QStringLiteral("controls"));

        layoutvdroite->addLayout(controls);

        inputcommands = new QHBoxLayout();
        inputcommands->setSpacing(6);
        inputcommands->setObjectName(QStringLiteral("inputcommands"));

        layoutvdroite->addLayout(inputcommands);

        layoutvdroite->setStretch(0, 2);
        layoutvdroite->setStretch(1, 3);
        layoutvdroite->setStretch(2, 3);

        mainlayout->addLayout(layoutvdroite, 0, 1, 1, 1);

        tabwidget = new QTabWidget(centralWidget);
        tabwidget->setObjectName(QStringLiteral("tabwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabwidget->sizePolicy().hasHeightForWidth());
        tabwidget->setSizePolicy(sizePolicy1);
        tabmap = new QWidget();
        tabmap->setObjectName(QStringLiteral("tabmap"));
        sizePolicy1.setHeightForWidth(tabmap->sizePolicy().hasHeightForWidth());
        tabmap->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        tabmap->setFont(font);
        verticalLayout_2 = new QVBoxLayout(tabmap);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        map = new QVBoxLayout();
        map->setSpacing(6);
        map->setObjectName(QStringLiteral("map"));

        verticalLayout_2->addLayout(map);

        tabwidget->addTab(tabmap, QString());
        tabattitudes = new QWidget();
        tabattitudes->setObjectName(QStringLiteral("tabattitudes"));
        sizePolicy1.setHeightForWidth(tabattitudes->sizePolicy().hasHeightForWidth());
        tabattitudes->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(tabattitudes);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        graphs = new QVBoxLayout();
        graphs->setSpacing(6);
        graphs->setObjectName(QStringLiteral("graphs"));

        verticalLayout_3->addLayout(graphs);

        tabwidget->addTab(tabattitudes, QString());

        mainlayout->addWidget(tabwidget, 0, 0, 1, 1);

        layouthbas = new QHBoxLayout();
        layouthbas->setSpacing(6);
        layouthbas->setObjectName(QStringLiteral("layouthbas"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RPYControl = new QHBoxLayout();
        RPYControl->setSpacing(6);
        RPYControl->setObjectName(QStringLiteral("RPYControl"));

        verticalLayout->addLayout(RPYControl);

        battery = new QHBoxLayout();
        battery->setSpacing(6);
        battery->setObjectName(QStringLiteral("battery"));

        verticalLayout->addLayout(battery);


        layouthbas->addLayout(verticalLayout);

        horizonindicator = new QVBoxLayout();
        horizonindicator->setSpacing(6);
        horizonindicator->setObjectName(QStringLiteral("horizonindicator"));

        layouthbas->addLayout(horizonindicator);

        compass = new QVBoxLayout();
        compass->setSpacing(6);
        compass->setObjectName(QStringLiteral("compass"));

        layouthbas->addLayout(compass);

        zcursor = new QVBoxLayout();
        zcursor->setSpacing(6);
        zcursor->setObjectName(QStringLiteral("zcursor"));

        layouthbas->addLayout(zcursor);

        layouthbas->setStretch(0, 1);
        layouthbas->setStretch(1, 1);
        layouthbas->setStretch(2, 1);
        layouthbas->setStretch(3, 1);

        mainlayout->addLayout(layouthbas, 1, 0, 1, 1);

        eandm = new QVBoxLayout();
        eandm->setSpacing(6);
        eandm->setObjectName(QStringLiteral("eandm"));

        mainlayout->addLayout(eandm, 1, 1, 1, 1);

        mainlayout->setRowStretch(0, 5);
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

        tabwidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        logo->setText(QString());
        tabwidget->setTabText(tabwidget->indexOf(tabmap), QApplication::translate("MainWindow", "Tab 1", 0));
        tabwidget->setTabText(tabwidget->indexOf(tabattitudes), QApplication::translate("MainWindow", "Tab 2", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
