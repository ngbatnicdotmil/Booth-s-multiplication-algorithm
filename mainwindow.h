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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int opset();
    void add();
    void sr();
    void sub();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int ac;
    int m,mc;
    int qminus;

};

#endif
