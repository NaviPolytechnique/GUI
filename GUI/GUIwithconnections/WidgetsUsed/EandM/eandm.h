#ifndef EANDM_H
#define EANDM_H

#include <QDialog>
#include <QTextBrowser>

namespace Ui {
class EandM;
}

class EandM : public QDialog
{
    Q_OBJECT

public:
    explicit EandM(QWidget *parent = 0);
    ~EandM();
    void popup(QString message);

private slots:
    //void on_textBrowser_2_textChanged();

private:
    Ui::EandM *ui;
};

#endif // EANDM_H
