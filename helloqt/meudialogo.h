#ifndef MEUDIALOGO_H
#define MEUDIALOGO_H

#include <QDialog>

namespace Ui {
class MeuDialogo;
}

class MeuDialogo : public QDialog
{
  Q_OBJECT

public:
  explicit MeuDialogo(QWidget *parent = 0);
  ~MeuDialogo();

private:
  Ui::MeuDialogo *ui;
};

#endif // MEUDIALOGO_H
