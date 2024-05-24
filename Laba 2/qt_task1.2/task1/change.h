#ifndef CHANGE_H
#define CHANGE_H
#include "list.h"
#include <QDialog>

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
    void on_dayComboBox1_currentIndexChanged(int index);

    void on_monthComboBox1_currentIndexChanged(int index);

    void on_spinBox_3_valueChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::change *ui;
    int day;
    int month;
    int year;
    Value per;
};

#endif // CHANGE_H
