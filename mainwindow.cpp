#include "mainwindow.h"
#include "newpage.h"

#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), newPage(nullptr)
{
    stackedWidget = new QStackedWidget(this);

    button = new QPushButton("Open New Page", this);
    connect(button, &QPushButton::clicked, this, &MainWindow::openNewPage);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(button);
    layout->addWidget(stackedWidget);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
    // 进行必要的清理操作
}

void MainWindow::openNewPage()
{
    if (!newPage) {
        newPage = new NewPage();
        stackedWidget->addWidget(newPage);
    }

    button->hide();
    stackedWidget->setCurrentWidget(newPage);
}
