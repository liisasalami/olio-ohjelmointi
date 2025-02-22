#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();

    //tila1
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->plussa->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plussa_clicked()
{

    if (tila == 3) {
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1+num2;
        qDebug() << "plus:" << result << "=" << num1 << "+" << num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);
    } else {
        qDebug() << "IDIOTA PAINA ENTER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    }
}

void MainWindow::on_miinus_clicked()
{
    if (tila == 3) {
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1-num2;
        qDebug() << "plus:" << result << "=" << num1 << "-" << num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);

    } else {
        qDebug() << "IDIOTA PAINA ENTER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    }
}

void MainWindow::on_kerto_clicked()
{
    if (tila == 3) {
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1*num2;
        qDebug() << "plus:" << result << "=" << num1 << "*" << num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);

    } else {
        qDebug() << "IDIOTA PAINA ENTER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    }
}

void MainWindow::on_jako_clicked()
{
    if (tila == 3) {
        QString num1Str = ui->num1->text();
        float num1 = num1Str.toFloat();

        QString num2Str = ui->num2->text();
        float num2 = num2Str.toFloat();

        float result = num1/num2;
        qDebug() << "plus:" << result << "=" << num1 << "/" << num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);
    } else {
        qDebug() << "IDIOTA PAINA ENTER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    }
}

void MainWindow::on_numero1_clicked()
{
    QString str = ui->numero1->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero=" << n;
    QString numStr = QString::number(n);
    if (tila == 1) {
        qDebug() << "Elementti num1";
        //laita n -> num1
        ui->num1->setText(numStr);

    } else if ( tila == 2) {
        //laita n -> num2
        qDebug() << "Elementti num2";
        ui->num2->setText(numStr);
    }
}

void MainWindow::setActiveControls()
{
    //tila
    if (tila == 1) {
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->plussa->setEnabled(false);

    } else if (tila == 2) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->plussa->setEnabled(false);
    } else if (tila == 3) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->plussa->setEnabled(true);
    }
}

void MainWindow::on_Enter_clicked()
{
    //tila1 = syötä numero
    //tila2 syätä numero
    //tila3 laske tulos

    if (tila > 3) {
        tila = 3;
    } else {
        tila ++;
    }
    qDebug() << "tila menossa" << tila;
    setActiveControls();
}

void MainWindow::on_numero2_clicked()
{
    QString str = ui->numero2->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero3_clicked()
{
    QString str = ui->numero3->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero4_clicked()
{
    QString str = ui->numero4->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero5_clicked()
{
    QString str = ui->numero5->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero6_clicked()
{
    QString str = ui->numero6->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero7_clicked()
{
    QString str = ui->numero7->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero8_clicked()
{
    QString str = ui->numero8->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero9_clicked()
{
    QString str = ui->numero9->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero0_clicked()
{
    QString str = ui->numero0->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_Reset_clicked()
{
    //resetoi kaikki näytöt eli num1 num2 result
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    tila = 1;
    setActiveControls();

}


