#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "pinni.h"
#include "kayttoliittyma.h"
#include "saldo.h"

#include <QMainWindow>

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
    void on_avaapin_clicked();

private:
    Ui::MainWindow *ui;

    saldo *pSaldo;
};
#endif // MAINWINDOW_H
