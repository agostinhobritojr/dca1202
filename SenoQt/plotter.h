#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
//  void setCorDeFundo(int r, int g, int b);

signals:

public slots:

};

#endif // PLOTTER_H
