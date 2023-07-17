#include "page1.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

Page1::Page1(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton("Click Me", this);
    connect(button, &QPushButton::clicked, this, &Page1::buttonClicked);

    label = new QLabel("This is Page 1", this);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(button);

    setLayout(layout);
}

void Page1::buttonClicked()
{
    // 处理按钮点击事件
    // 可以在此处添加页面切换逻辑或其他操作
}
