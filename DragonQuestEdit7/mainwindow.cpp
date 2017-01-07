#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open Dragon Quest Savegame", QString(),
            "Dragon Quest 7 Savegames (save001.bin save002.bin save003.bin)");
}

void MainWindow::on_actionSave_triggered()
{
}

void MainWindow::on_actionSave_as_triggered()
{
}
