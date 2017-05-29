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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbrirArquivo;
    QAction *actionPreferencias;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *horizontalSliderAmp;
    QLabel *label_2;
    QSlider *horizontalSliderOmega;
    QLabel *label_3;
    QSlider *horizontalSliderVeloc;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLCDNumber *lcdNumberX;
    QLabel *label_5;
    QLCDNumber *lcdNumberY;
    QSpacerItem *verticalSpacer;
    Plotter *widgetPlotter;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_Edit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(596, 444);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/skull"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionAbrirArquivo = new QAction(MainWindow);
        actionAbrirArquivo->setObjectName(QStringLiteral("actionAbrirArquivo"));
        actionPreferencias = new QAction(MainWindow);
        actionPreferencias->setObjectName(QStringLiteral("actionPreferencias"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSliderAmp = new QSlider(centralWidget);
        horizontalSliderAmp->setObjectName(QStringLiteral("horizontalSliderAmp"));
        horizontalSliderAmp->setValue(99);
        horizontalSliderAmp->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAmp, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSliderOmega = new QSlider(centralWidget);
        horizontalSliderOmega->setObjectName(QStringLiteral("horizontalSliderOmega"));
        horizontalSliderOmega->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderOmega, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSliderVeloc = new QSlider(centralWidget);
        horizontalSliderVeloc->setObjectName(QStringLiteral("horizontalSliderVeloc"));
        horizontalSliderVeloc->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderVeloc, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lcdNumberX = new QLCDNumber(centralWidget);
        lcdNumberX->setObjectName(QStringLiteral("lcdNumberX"));
        lcdNumberX->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumberX, 0, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        lcdNumberY = new QLCDNumber(centralWidget);
        lcdNumberY->setObjectName(QStringLiteral("lcdNumberY"));
        lcdNumberY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumberY, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QStringLiteral("widgetPlotter"));

        horizontalLayout->addWidget(widgetPlotter);

        horizontalLayout->setStretch(0, 30);
        horizontalLayout->setStretch(1, 70);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuFile->addAction(actionAbrirArquivo);
        menuFile->addAction(actionQuit);
        menu_Edit->addAction(actionPreferencias);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAbrirArquivo->setText(QApplication::translate("MainWindow", "AbrirArquivo", 0));
        actionPreferencias->setText(QApplication::translate("MainWindow", "preferencias...", 0));
        label->setText(QApplication::translate("MainWindow", "Amplitude", 0));
        label_2->setText(QApplication::translate("MainWindow", "Omega", 0));
        label_3->setText(QApplication::translate("MainWindow", "Velocidade", 0));
        label_4->setText(QApplication::translate("MainWindow", "X", 0));
        label_5->setText(QApplication::translate("MainWindow", "Y", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
