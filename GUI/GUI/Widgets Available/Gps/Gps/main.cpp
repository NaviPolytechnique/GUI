#include "gps.h"
#include <QApplication>

#include <QMessageBox>

#include <QPixmap>
#include <QPainter>
#include <QLabel>

int main(int argc, char **argv){
  QApplication app(argc, argv);
  Gps w;
  w.show();
  return app.exec();
}
