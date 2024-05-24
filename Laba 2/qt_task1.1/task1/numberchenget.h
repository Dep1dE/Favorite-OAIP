#ifndef NUMBERCHENGET_H
#define NUMBERCHENGET_H

#include <QDialog>

namespace Ui {
class numberchenget;
}

class numberchenget : public QDialog
{
    Q_OBJECT

public:
    explicit numberchenget(QWidget *parent = nullptr);
    ~numberchenget();
    void addSize(const int &);
signals:
    void sendIndex(const int &);

private slots:
    void on_pushButton_clicked();

private:
    Ui::numberchenget *ui;
};

#endif // NUMBERCHENGET_H
