#ifndef OSHIBKA_H
#define OSHIBKA_H

#include <QDialog>

namespace Ui {
class oshibka;
}

class oshibka : public QDialog
{
    Q_OBJECT

public:
    explicit oshibka(QWidget *parent = nullptr);
    ~oshibka();

    void osibka(const int &, const int &, const int &);

private:
    Ui::oshibka *ui;
};

#endif // OSHIBKA_H
