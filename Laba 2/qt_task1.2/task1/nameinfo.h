#ifndef NAMEINFO_H
#define NAMEINFO_H

#include <QDialog>
#include "list.h"

namespace Ui {
class nameinfo;
}

class nameinfo : public QDialog
{
    Q_OBJECT
signals:
    void sendName(const QString &);
public:
    explicit nameinfo(QWidget *parent = nullptr);
    ~nameinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::nameinfo *ui;
};

#endif // NAMEINFO_H
