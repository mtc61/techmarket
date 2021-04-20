#include "teknopc.h"
#include "ui_teknopc.h"

TEKNOPC::TEKNOPC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TEKNOPC)
{
    ui->setupUi(this);
}

TEKNOPC::~TEKNOPC()
{
    delete ui;
}
