#include "include/aboutprogram.h"
#include "ui_aboutprogram.h"
#include <QDesktopServices>
#include <QUrl>

AboutProgram::AboutProgram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutProgram)
{
    ui->setupUi(this);
    setFixedSize(width(), height());
}

AboutProgram::~AboutProgram()
{
    delete ui;
}

void AboutProgram::on_pushButton_clicked()
{
    close();
}
