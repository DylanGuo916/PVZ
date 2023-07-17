#ifndef PAGE2_H
#define PAGE2_H

#include <QWidget>

class QLabel;

class Page2 : public QWidget
{
    Q_OBJECT

public:
    Page2(QWidget *parent = nullptr);

private:
    QLabel *label;
};

#endif // PAGE2_H
