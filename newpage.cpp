#include "newpage.h"

#include <QPushButton>
#include <QVBoxLayout>

NewPage::NewPage(QWidget *parent)
    : QWidget(parent)
{
    backButton = new QPushButton("Back", this);
    connect(backButton, &QPushButton::clicked, this, &NewPage::backButtonClicked);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(backButton);

    setLayout(layout);
}
