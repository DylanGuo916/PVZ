#include "page2.h"
#include <QLabel>
#include <QVBoxLayout>

Page2::Page2(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel("This is Page 2", this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);

    setLayout(layout);
}
