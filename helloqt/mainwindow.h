#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT  // macro de compilacao

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
  void finaliza();
  void copiaTexto();
  void mostraAloVoce();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
