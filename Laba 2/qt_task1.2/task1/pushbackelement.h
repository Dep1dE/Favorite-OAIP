#ifndef PUSHBACKELEMENT_H
#define PUSHBACKELEMENT_H

#include <QDialog>
#include "list.h"

namespace Ui {
class pushbackelement;
}

class pushbackelement : public QDialog
{
    Q_OBJECT

public:
    explicit pushbackelement(QWidget *parent = nullptr);
    ~pushbackelement();

signals:
    void sendIformation(const Value &);

private slots:
    void on_dayComboBox_currentIndexChanged(int index);

    void on_monthComboBox_currentIndexChanged(int index);

    void on_yearSpinBox_valueChanged(int arg1);

    void on_pushButton_clicked();



private:
    Ui::pushbackelement *ui;
    Value per;
    int day;
    int month;
    int year;
};

#endif // PUSHBACKELEMENT_H
