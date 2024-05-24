#ifndef DATEINFO_H
#define DATEINFO_H

#include <QDialog>

namespace Ui {
class dateinfo;
}

class dateinfo : public QDialog
{
    Q_OBJECT

public:
    explicit dateinfo(QWidget *parent = nullptr);
    ~dateinfo();
signals:
    void sendDate(const QString &);

private slots:
    void on_pushButton_clicked();

private:
    Ui::dateinfo *ui;
};

#endif // DATEINFO_H
