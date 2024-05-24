#include "window3.h"
#include "ui_window3.h"

window3::window3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window3)
{
    ui->setupUi(this);
    row = 0;

    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(row);
    ui->tableWidget->horizontalHeader()->resizeSection(1, 149);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("ФИО"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Название проекта"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Задание"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Дедлайн"));
    ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("Дата начала"));
    ui->tableWidget->setHorizontalHeaderItem(5,new QTableWidgetItem("Дата конца"));
    ui->tableWidget->setHorizontalHeaderItem(6,new QTableWidgetItem("Суммарное время работы каждого за прошедший месяц"));
}

window3::~window3()
{
    delete ui;
}

void window3::addItem(WORK w)
{
    ui->tableWidget->setRowCount(++row);

    ui->tableWidget->setItem(row - 1, 0, new QTableWidgetItem(w.getFio()));
    ui->tableWidget->setItem(row - 1, 1, new QTableWidgetItem(w.getName()));
    ui->tableWidget->setItem(row - 1, 2, new QTableWidgetItem(w.getTask()));
    ui->tableWidget->setItem(row - 1, 3, new QTableWidgetItem(w.getDeadline()));
    ui->tableWidget->setItem(row - 1, 4, new QTableWidgetItem(w.getStartDate()));
    ui->tableWidget->setItem(row - 1, 5, new QTableWidgetItem(w.getFinishDate()));
    ui->tableWidget->setItem(row - 1, 6, new QTableWidgetItem(QString::number(w.hours())));
}
