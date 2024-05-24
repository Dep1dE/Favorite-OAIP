#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "vector.h"
#include <QString>
#include <QDebug>
using namespace std;

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

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

public:
    Vector<Pair<Vector<int>,Vector<Pair<int,double>>>> v;
    Pair<Vector<int>,Vector<Pair<int,double>>> osnovPair;
    Vector<int> firstVector;
    Vector<Pair<int,double>> secondVector;
    Pair<int,double> vtorPair;
    int g=0;
};

#endif // MAINWINDOW_H
