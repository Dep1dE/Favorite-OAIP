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


void MainWindow::on_action_triggered()
{
    path = QFileDialog::getOpenFileName(this,"Выбрать файл","C:/",
                                                "All Files (*.txt)");
    QFile file(path);
         if (file.open(QIODevice::ReadOnly))
         {
              QTextStream out(&file);
              text=out.readAll();
              ui->textEdit->setText(text);
              file.close();
         }

}


void MainWindow::on_pushButton_clicked()
{
    text=ui->textEdit->toPlainText();
    s->task(text);

}

