#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int size = ui->comboBox->currentText().toInt(), mod = 16;
       hashTable<int> hashTable(size);
       while (ui->gridLayout->count() > 0) {
           QLayoutItem* item = ui->gridLayout->takeAt(0);
           delete item->widget();
           delete item;
       }
       QCustomPlot* Graphic = new QCustomPlot();
       ui->gridLayout->addWidget(Graphic, 1, 0, 1, 1);
       for (int i = 0;i<size;i++) {
           hashTable.insert(rand()%mod, rand()%mod);
       }
       int times = 0;
       QVector <double> x1(5), y1(5);
       for (int i = 500;times<4;i *= 5) {
           QElapsedTimer timer;
           timer.start();
           for (int j = 0;j<i;j++) {
               hashTable.find(rand()%mod);
           }

           x1[times] = i;
           y1[times] = timer.elapsed();
           ++times;
       }
       Graphic->addGraph(Graphic->xAxis, Graphic->yAxis);
       Graphic->graph(0)->setData(x1,y1);
       Graphic->xAxis->setLabel("count of finds");
       Graphic->yAxis->setLabel("time, ms");
       Graphic->xAxis->setRange(0,x1.at(3));
       Graphic->yAxis->setRange(0,y1.at(3));
       Graphic->replot();
}

