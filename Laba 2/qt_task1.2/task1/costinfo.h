#ifndef COSTINFO_H
#define COSTINFO_H

#include <QDialog>

namespace Ui {
class costinfo;
}

class costinfo : public QDialog
{
    Q_OBJECT

public:
    explicit costinfo(QWidget *parent = nullptr);
    ~costinfo();
signals:
    void sendCost(const QString &);
private slots:
    void on_pushButton_clicked();

private:
    Ui::costinfo *ui;
};

#endif // COSTINFO_H
