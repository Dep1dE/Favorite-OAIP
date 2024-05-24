#include "window2.h"
#include "ui_window2.h"

WIndow2::WIndow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WIndow2)
{
    ui->setupUi(this);
    row = 0;

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(row);
    ui->tableWidget->horizontalHeader()->resizeSection(1, 149);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("ФИО"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Название проекта"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Задание"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Дедлайн"));
    ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("Дата начала"));
    ui->tableWidget->setHorizontalHeaderItem(5,new QTableWidgetItem("Дата конца"));

    arr = nullptr;
    sizearr = 0;
}

WIndow2::~WIndow2()
{
    delete ui;
}

void WIndow2::addItem(WORK w)
{
    ui->tableWidget->setRowCount(++row);

    ui->tableWidget->setItem(row - 1, 0, new QTableWidgetItem(w.getFio()));
    ui->tableWidget->setItem(row - 1, 1, new QTableWidgetItem(w.getName()));
    ui->tableWidget->setItem(row - 1, 2, new QTableWidgetItem(w.getTask()));
    ui->tableWidget->setItem(row - 1, 3, new QTableWidgetItem(w.getDeadline()));
    ui->tableWidget->setItem(row - 1, 4, new QTableWidgetItem(w.getStartDate()));
    ui->tableWidget->setItem(row - 1, 5, new QTableWidgetItem(w.getFinishDate()));
}

void WIndow2::addArray(WORK *array, int size)
{
    arr = array;
    sizearr = size;

    sort(arr, 0, size - 1);

    for (int i = 0; i < size; ++i)
        addItem(arr[i]);
}

void WIndow2::sort(WORK *arr, int low, int high)
{
    int i = low;
    int j = high;
    WORK mid = arr[(i + j) / 2];

    do
    {
        while (srav(arr[i], mid) == -1) ++i;
        while(srav(arr[j], mid) == 1) --j;

        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            ++i;
            --j;
        }

        if (j > low) sort(arr, low, j);
        if (i < high) sort(arr, i, high);

    } while(i <= j);
}

int WIndow2::srav(WORK w1, WORK w2)
{
            int day1 = w1.getDay();
            int day2 = w2.getDay();
            int month1 = w1.getMonth();
            int month2 = w2.getMonth();
            int year1 = w1.getYear();
            int year2 = w2.getYear();

            if (year1 < year2) return -1;
            else if (year2 < year1) return 1;

            if (month1 < month2) return -1;
            else if (month2 < month1) return 1;

            if (day1 < day2) return -1;
            else if (day2 < day1) return 1;

            return 0;
}
