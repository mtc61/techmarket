#include "tek_mar.h"
#include "ui_tek_mar.h"

TEK_MAR::TEK_MAR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TEK_MAR)
{
    ui->setupUi(this);
}

TEK_MAR::~TEK_MAR()
{
    delete ui;
}

