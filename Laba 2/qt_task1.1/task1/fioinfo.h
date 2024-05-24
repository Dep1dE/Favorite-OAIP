#ifndef FIOINFO_H
#define FIOINFO_H

#include <QDialog>
#include "list.h"

namespace Ui {
class fioInfo;
}

class fioInfo : public QDialog
{
    Q_OBJECT

public:
    explicit fioInfo(QWidget *parent = nullptr);
    ~fioInfo();
signals:
    void sendFio(const QString &);
private slots:
    void on_pushButton_clicked();

private:
    Ui::fioInfo *ui;
};

#endif // FIOINFO_H
