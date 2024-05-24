#ifndef PUSHBACKELEMENT_H
#define PUSHBACKELEMENT_H

#include <QDialog>
#include "list.h"

namespace Ui {
class pushBackElement;
}

class pushBackElement : public QDialog
{
    Q_OBJECT

signals:
    void sendIformation(const Value &);

public:
    explicit pushBackElement(QWidget *parent = nullptr);
    ~pushBackElement();

private slots:
    void on_dayComboBox_currentIndexChanged(int index);

    void on_monthComboBox_currentIndexChanged(int index);

    void on_yearSpinBox_valueChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::pushBackElement *ui;
    Value per;
    QString fio;
    int otdel;
    QString dolzhnost;
    int day;
    int month;
    int year;
};

#endif // PUSHBACKELEMENT_H
