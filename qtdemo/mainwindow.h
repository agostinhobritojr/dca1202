#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// declaracao forward
namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
  void copiaTexto();
  void mataTudo();
  void definePreferencias();
  void leposicao(int x, int y);

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
