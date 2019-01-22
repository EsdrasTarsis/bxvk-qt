#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionLoad_triggered();

    void on_actionExit_triggered();

    void on_actionSave_triggered();

    void on_actionPreferences_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    void checkOptions();
};

#endif // MAINWINDOW_H
