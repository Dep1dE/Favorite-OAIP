#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "C:\Users\stepa\Desktop\BSUIR\OAIP\Laba 4\mystring\mystring.h"

#include <QMainWindow>
#include <QString>
#include <regex>

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
    void on_action_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    String f;
    QString path;
};
#endif // MAINWINDOW_H
