#include "numberchenget.h"
#include "ui_numberchenget.h"

numberchenget::numberchenget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::numberchenget)
{
    ui->setupUi(this);
}

numberchenget::~numberchenget()
{
    delete ui;
}
void numberchenget::addSize(const int &n)
{
    ui->spinBox->setMaximum(n);
}
void numberchenget::on_pushButton_clicked()
{
    emit sendIndex(ui->spinBox->value());
    this->close();
}

