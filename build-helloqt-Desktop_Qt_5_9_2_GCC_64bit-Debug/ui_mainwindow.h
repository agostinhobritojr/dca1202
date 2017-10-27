/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QAction *actionAbreDialogo;
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *horizontalSliderAmp;
    QLCDNumber *lcdNumberAmp;
    QLabel *label_3;
    QSlider *horizontalSliderFreq;
    QLCDNumber *lcdNumberFreq;
    QLabel *label_2;
    QSlider *horizontalSliderVeloc;
    QLCDNumber *lcdNumberVeloc;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEditEsq;
    QPushButton *pushButtonCopia;
    QPlainTextEdit *plainTextEditDir;
    Plotter *widgetPlotter;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDenovo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLCDNumber *lcdNumberX;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLCDNumber *lcdNumberY;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(610, 500);
        actionAbreDialogo = new QAction(MainWindow);
        actionAbreDialogo->setObjectName(QStringLiteral("actionAbreDialogo"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/morre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
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

        lcdNumberAmp = new QLCDNumber(centralWidget);
        lcdNumberAmp->setObjectName(QStringLiteral("lcdNumberAmp"));
        lcdNumberAmp->setFrameShape(QFrame::Panel);
        lcdNumberAmp->setFrameShadow(QFrame::Plain);
        lcdNumberAmp->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumberAmp, 0, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalSliderFreq = new QSlider(centralWidget);
        horizontalSliderFreq->setObjectName(QStringLiteral("horizontalSliderFreq"));
        horizontalSliderFreq->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderFreq, 1, 1, 1, 1);

        lcdNumberFreq = new QLCDNumber(centralWidget);
        lcdNumberFreq->setObjectName(QStringLiteral("lcdNumberFreq"));
        lcdNumberFreq->setFrameShadow(QFrame::Plain);
        lcdNumberFreq->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumberFreq, 1, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalSliderVeloc = new QSlider(centralWidget);
        horizontalSliderVeloc->setObjectName(QStringLiteral("horizontalSliderVeloc"));
        horizontalSliderVeloc->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderVeloc, 2, 1, 1, 1);

        lcdNumberVeloc = new QLCDNumber(centralWidget);
        lcdNumberVeloc->setObjectName(QStringLiteral("lcdNumberVeloc"));
        lcdNumberVeloc->setFrameShadow(QFrame::Plain);
        lcdNumberVeloc->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumberVeloc, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plainTextEditEsq = new QPlainTextEdit(centralWidget);
        plainTextEditEsq->setObjectName(QStringLiteral("plainTextEditEsq"));

        horizontalLayout->addWidget(plainTextEditEsq);

        pushButtonCopia = new QPushButton(centralWidget);
        pushButtonCopia->setObjectName(QStringLiteral("pushButtonCopia"));
        pushButtonCopia->setIcon(icon);

        horizontalLayout->addWidget(pushButtonCopia);

        plainTextEditDir = new QPlainTextEdit(centralWidget);
        plainTextEditDir->setObjectName(QStringLiteral("plainTextEditDir"));

        horizontalLayout->addWidget(plainTextEditDir);


        horizontalLayout_3->addLayout(horizontalLayout);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QStringLiteral("widgetPlotter"));

        horizontalLayout_3->addWidget(widgetPlotter);

        horizontalLayout_3->setStretch(0, 30);
        horizontalLayout_3->setStretch(1, 70);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonDenovo = new QPushButton(centralWidget);
        pushButtonDenovo->setObjectName(QStringLiteral("pushButtonDenovo"));

        horizontalLayout_2->addWidget(pushButtonDenovo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lcdNumberX = new QLCDNumber(centralWidget);
        lcdNumberX->setObjectName(QStringLiteral("lcdNumberX"));

        horizontalLayout_2->addWidget(lcdNumberX);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lcdNumberY = new QLCDNumber(centralWidget);
        lcdNumberY->setObjectName(QStringLiteral("lcdNumberY"));

        horizontalLayout_2->addWidget(lcdNumberY);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(centralWidget);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));

        horizontalLayout_2->addWidget(pushButtonOk);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 610, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAbreDialogo);
        menuFile->addAction(actionQuit);
        toolBar->addAction(actionAbreDialogo);
        toolBar->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonDenovo, SIGNAL(clicked()), MainWindow, SLOT(mataTudo()));
        QObject::connect(horizontalSliderAmp, SIGNAL(valueChanged(int)), lcdNumberAmp, SLOT(display(int)));
        QObject::connect(horizontalSliderFreq, SIGNAL(valueChanged(int)), lcdNumberFreq, SLOT(display(int)));
        QObject::connect(horizontalSliderVeloc, SIGNAL(valueChanged(int)), lcdNumberVeloc, SLOT(display(int)));
        QObject::connect(horizontalSliderAmp, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(mudaAmplitude(int)));
        QObject::connect(horizontalSliderFreq, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(mudaFrequencia(int)));
        QObject::connect(actionAbreDialogo, SIGNAL(triggered()), MainWindow, SLOT(abreDialogo()));
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(widgetPlotter, SIGNAL(mudouX(int)), lcdNumberX, SLOT(display(int)));
        QObject::connect(widgetPlotter, SIGNAL(mudouY(int)), lcdNumberY, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAbreDialogo->setText(QApplication::translate("MainWindow", "AbreDialogo", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Amp", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Freq", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Veloc", Q_NULLPTR));
        pushButtonCopia->setText(QString());
        pushButtonDenovo->setText(QApplication::translate("MainWindow", "Morre de novo", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "y", Q_NULLPTR));
        pushButtonOk->setText(QApplication::translate("MainWindow", "Morre, diabo!", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
