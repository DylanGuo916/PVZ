#ifndef PAGE1_H
#define PAGE1_H

#include <QWidget>

class QPushButton;
class QLabel;

class Page1 : public QWidget
{
    Q_OBJECT

public:
    Page1(QWidget *parent = nullptr);

private slots:
    void buttonClicked();

private:
    QPushButton *button;
    QLabel *label;
};

#endif // PAGE1_H
