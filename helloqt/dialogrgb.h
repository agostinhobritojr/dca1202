#ifndef DIALOGRGB_H
#define DIALOGRGB_H

#include <QDialog>

namespace Ui {
class DialogRgb;
}

class DialogRgb : public QDialog
{
  Q_OBJECT

public:
  explicit DialogRgb(QWidget *parent = 0);
  ~DialogRgb();
  int getR();
  int getG();
  int getB();

private:
  Ui::DialogRgb *ui;
};

#endif // DIALOGRGB_H
