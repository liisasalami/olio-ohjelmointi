#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_plussa_clicked();
    void on_miinus_clicked();
    void on_kerto_clicked();
    void on_jako_clicked();
    void on_numero1_clicked();

    void on_Enter_clicked();

    void on_numero2_clicked();

    void on_numero3_clicked();

    void on_numero4_clicked();

    void on_numero5_clicked();

    void on_numero6_clicked();

    void on_numero7_clicked();

    void on_numero8_clicked();

    void on_numero9_clicked();

    void on_numero0_clicked();

    void on_Reset_clicked();

private:
    Ui::MainWindow *ui;
    void numberClickHandler(int n);
    void setActiveControls();

    int tila = 1;
};
#endif // MAINWINDOW_H
