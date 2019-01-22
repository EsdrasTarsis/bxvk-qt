#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include "include/aboutprogram.h"
#include <iostream>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <string>

using namespace std;

string static WarningMSG = "[WARN] ";

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(width(),height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checkOptions()
{
    bool amfnwcb,d3d10oncb,spnvcb,spamcb;
    amfnwcb=ui->checkBox->isChecked();
    d3d10oncb=ui->checkBox2->isChecked();
    spnvcb=ui->checkBox3->isChecked();
    spamcb=ui->checkBox4->isChecked();

    if(amfnwcb)
        cout << "Allow Map Flag No Wair Enabled" << endl;
    if(d3d10oncb)
        cout << "Direct3D 10 Enabled" << endl;
    if(spnvcb)
        cout << "Spoof Nvidia GPU Enabled" << endl;
    if(spamcb)
        cout << "Spoof AMD GPU Enabled" << endl;
}

void MainWindow::on_actionLoad_triggered()
{
    QString filter="DXVK Config Files (*.conf)";
    QString filename=QFileDialog::getOpenFileName(this,"Open DXVK Configuration File",QDir::homePath(),filter);
    cout << "Filename: " << filename.toUtf8().constData() << endl;
    cout << WarningMSG << "Load feature is not implemented!" << endl;
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Error", "File could not be opened or it was not selected!");
        return;
    } else {
        //Well...
    }
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::closeAllWindows();
}

void MainWindow::on_actionSave_triggered()
{
    checkOptions();
    cout << WarningMSG << "Save feature not implemented!" << endl;
}

void MainWindow::on_actionPreferences_triggered()
{
    cout << WarningMSG << "Preferences not implemented!" << endl;
}

void MainWindow::on_actionAbout_triggered()
{
    AboutProgram about;
    about.exec();
}
