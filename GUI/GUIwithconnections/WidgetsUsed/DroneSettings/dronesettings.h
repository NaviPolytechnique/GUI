#ifndef DRONESETTINGS_H
#define DRONESETTINGS_H

#include <QDialog>

namespace Ui {
class DroneSettings;
}

class DroneSettings : public QDialog
{
    Q_OBJECT

public:
    explicit DroneSettings(QWidget *parent = 0);
    ~DroneSettings();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DroneSettings *ui;
};

#endif // DRONESETTINGS_H
