#ifndef OTDELINFO_H
#define OTDELINFO_H

#include <QDialog>

namespace Ui {
class otdelinfo;
}

class otdelinfo : public QDialog
{
    Q_OBJECT

public:
    explicit otdelinfo(QWidget *parent = nullptr);
    ~otdelinfo();
signals:
    void sendOtdel(const QString &);
private slots:
    void on_pushButton_clicked();

private:
    Ui::otdelinfo *ui;
};

#endif // OTDELINFO_H
