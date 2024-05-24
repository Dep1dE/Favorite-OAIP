#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>
#include "work.h"

namespace Ui {
class Window;
}

class Window : public QDialog
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();
    void addItem(WORK);

private:
    Ui::Window *ui;
    int row;
};

#endif // WINDOW_H
