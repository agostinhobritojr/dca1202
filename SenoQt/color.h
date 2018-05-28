#ifndef COLOR_H
#define COLOR_H

#include <QWidget>

class Color : public QWidget
{
  Q_OBJECT
private:
  int r, g, b;
public:
  explicit Color(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void setRGB(int _r, int _g, int _b);
signals:

public slots:
};

#endif // COLOR_H
