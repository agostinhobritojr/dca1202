#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QColorDialog>

#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonQuit,
            SIGNAL(clicked(bool)),
            this,
            SLOT(finaliza()));

    connect(ui->horizontalSliderAmp,
            SIGNAL(valueChanged(int)),
            ui->widgetPlot,
            SLOT(mudaAmplitude(int)));

    connect(ui->horizontalSliderFreq,
            SIGNAL(valueChanged(int)),
            ui->widgetPlot,
            SLOT(mudaFrequencia(int)));

    connect(ui->horizontalSliderVel,
            SIGNAL(valueChanged(int)),
            ui->widgetPlot,
            SLOT(mudaVelocidade(int)));

    connect(ui->widgetPlot,
            SIGNAL(mudaX(int)),
            ui->lcdNumberX,
            SLOT(display(int)));

    connect(ui->widgetPlot,
            SIGNAL(mudaY(int)),
            ui->lcdNumberY,
            SLOT(display(int)));

    ui->menuFile->addAction(ui->actionQuit);
    ui->menuHelp->addAction(ui->actionSobre);
    ui->menuEdit->addAction(ui->actionPreferencias);

    connect(ui->actionQuit,
            SIGNAL(triggered(bool)),
            this,
            SLOT(finaliza()));

    connect(ui->actionSobre,
            SIGNAL(triggered(bool)),
            this,
            SLOT(sobreOPrograma()));

    connect(ui->actionPreferencias,
            SIGNAL(triggered(bool)),
            this,
            SLOT(abrePreferencias()));

    ui->horizontalSliderAmp->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finaliza()
{
    exit(0);
}

void MainWindow::sobreOPrograma(){
    QMessageBox m;
    QString s;
    s = QString("<u>Sobre:</u>")+
        QString("<br>")+
        QString("<strong>Agostinho Brito</strong>");
    m.setText(s);
    m.exec();
}

void MainWindow::abrePreferencias(){
    QColorDialog color;

    if(color.exec() == QDialog::Accepted){
        QColor selected;
        selected = color.selectedColor();

        ui->widgetPlot->mudaFundo(
            selected.red(),
            selected.green(),
            selected.blue());
    }

    /*
    Dialog d;
    if(d.exec() == QDialog::Accepted){
        qDebug() << d.getR() << d.getG() << d.getB();
        ui->widgetPlot->mudaFundo(d.getR(),
                                  d.getG(),
                                  d.getB());
    }
    else{
        qDebug() << "usuario desistiu";
    }
*/
}







