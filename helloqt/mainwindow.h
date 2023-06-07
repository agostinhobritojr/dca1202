#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
// forward declaration
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    // macro de compilacao
    // tratamento de sinais/slots
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void finaliza(void);
    void copia(void);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
