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
    QString amfnwcbtext,d3d10oncbtext,spnvcbtext,spamcbtext,dsccbtext,nvapihackcbtext,almemovertext,rawssbotext,eadiscbtext;
    amfnwcbtext=ui->amfnwcb->text();
    d3d10oncbtext=ui->d3d10oncb->text();
    spnvcbtext=ui->spnvcb->text();
    spamcbtext=ui->spamcb->text();
    dsccbtext=ui->dsccb->text();
    nvapihackcbtext=ui->nvapihackcb->text();
    almemovertext=ui->almemovercb->text();
    rawssbotext=ui->rawssbocb->text();
    eadiscbtext=ui->eadiscb->text();

    if(ui->amfnwcb->isChecked()) {
        cout << amfnwcbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << amfnwcbtext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->d3d10oncb->isChecked()) {
        cout << d3d10oncbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << d3d10oncbtext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->spnvcb->isChecked()) {
        cout << spnvcbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << spnvcbtext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->spamcb->isChecked()) {
        cout << spamcbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << spamcbtext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->dsccb->isChecked()) {
        cout << dsccbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << dsccbtext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->nvapihackcb->isChecked()) {
        cout << nvapihackcbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << nvapihackcbtext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->almemovercb->isChecked()) {
        cout << almemovertext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << almemovertext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->rawssbocb->isChecked()){
        cout << rawssbotext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << rawssbotext.toUtf8().constData() << " Disabled!" << endl;
    }
    if(ui->eadiscb->isChecked()){
        cout << eadiscbtext.toUtf8().constData() << " Enabled!" << endl;
    } else {
        cout << eadiscbtext.toUtf8().constData() << " Disabled!" << endl;
    }
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
    cout << WarningMSG << "Save feature have incomplete implementation!" << endl;
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
