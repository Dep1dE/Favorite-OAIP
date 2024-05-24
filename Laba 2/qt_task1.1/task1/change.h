#ifndef CHANGE_H
#define CHANGE_H

#include <QDialog>
#include "list.h"

namespace Ui {
class change;
}

class change : public QDialog
{
    Q_OBJECT
signals:
    void sendIformation(const Value &);

public:
    explicit change(QWidget *parent = nullptr);
    ~change();

private slots:
    void on_pushButton_clicked();

    void on_dayComboBox1_currentIndexChanged(int index);

    void on_monthComboBox1_currentIndexChanged(int index);

    void on_yearSpinBox1_valueChanged(int arg1);

private:
    Ui::change *ui;
    Value per;
    QString fio;
    int otdel;
    QString dolzhnost;
    int day;
    int month;
    int year;
};

#endif // CHANGE_H
