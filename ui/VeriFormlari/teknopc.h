#ifndef TEKNOPC_H
#define TEKNOPC_H

#include <QDialog>

namespace Ui {
class TEKNOPC;
}

class TEKNOPC : public QDialog
{
    Q_OBJECT

public:
    explicit TEKNOPC(QWidget *parent = nullptr);
    ~TEKNOPC();

private:
    Ui::TEKNOPC *ui;
};

#endif // TEKNOPC_H
