#ifndef WINDOW1_H
#define WINDOW1_H
#include <QDialog>

namespace Ui {
class Window1;
}

class Window1 : public QDialog
{
    Q_OBJECT

public:
    explicit Window1(QWidget *parent = nullptr);
    ~Window1();

signals:
    void send(QString, QString, QString, QString, QString, QString);

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_spinBox_valueChanged(int arg1);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_spinBox_2_valueChanged(int arg1);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_comboBox_6_currentIndexChanged(int index);

    void on_spinBox_3_valueChanged(int arg1);

private:
    Ui::Window1 *ui;
    int deadlineday, deadlinemonth, deadlineyear, startday, startmonth, startyear, finishday, finishmonth, finishyear;
};

#endif // WINDOW1_H
