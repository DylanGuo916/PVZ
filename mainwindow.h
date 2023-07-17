#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QStackedWidget;
class QPushButton;
class NewPage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openNewPage();

private:
    QStackedWidget *stackedWidget;
    QPushButton *button;
    NewPage *newPage;
};

#endif // MAINWINDOW_H
