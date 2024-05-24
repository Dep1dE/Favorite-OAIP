#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "queue.h"
#include <memory>
#include <algorithm>

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
    Queue q, q1, q2;
    //auto n = l.begin;
};
#endif // MAINWINDOW_H
