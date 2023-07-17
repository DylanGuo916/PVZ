#ifndef NEWPAGE_H
#define NEWPAGE_H

#include <QWidget>

class QPushButton;

class NewPage : public QWidget
{
    Q_OBJECT

public:
    NewPage(QWidget *parent = nullptr);

signals:
    void backButtonClicked();

private:
    QPushButton *backButton;
};

#endif // NEWPAGE_H
