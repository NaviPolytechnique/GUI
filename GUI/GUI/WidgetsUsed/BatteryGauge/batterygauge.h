#ifndef BATTERYGAUGE_H
#define BATTERYGAUGE_H

#include <QWidget>

namespace Ui {
class BatteryGauge;
}

class BatteryGauge : public QWidget
{
    Q_OBJECT

public:
    explicit BatteryGauge(QWidget *parent = 0);
    ~BatteryGauge();

private slots:
    void on_batterygauge_valueChanged(int value);

private:
    Ui::BatteryGauge *ui;
};

#endif // BATTERYGAUGE_H
