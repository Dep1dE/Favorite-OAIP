#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QDebug>
#include <QMainWindow>
#include "vector.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
public:
    int k;
    Vector<int> v;
    Vector<int> p;
    QString boof;
};
#endif // MAINWINDOW_H
