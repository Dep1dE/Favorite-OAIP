#ifndef WINDOW2_H
#define WINDOW2_H

#include <QDialog>
#include "work.h"
namespace Ui {
class WIndow2;
}

class WIndow2 : public QDialog
{
    Q_OBJECT

public:
    explicit WIndow2(QWidget *parent = nullptr);
    ~WIndow2();
    void addItem(WORK);
    void addArray(WORK *, int);

private:
    Ui::WIndow2 *ui;
    WORK* arr;
    int sizearr;
    int row;
    void sort(WORK *, int, int);
    int srav(WORK, WORK);
};

#endif // WINDOW2_H
