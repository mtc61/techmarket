#ifndef TEK_MAR_H
#define TEK_MAR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TEK_MAR; }
QT_END_NAMESPACE

class TEK_MAR : public QMainWindow
{
    Q_OBJECT

public:
    TEK_MAR(QWidget *parent = nullptr);
    ~TEK_MAR();

private:
    Ui::TEK_MAR *ui;
};
#endif // TEK_MAR_H
