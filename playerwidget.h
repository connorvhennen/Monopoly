#ifndef PLAYERWIDGET_H
#define PLAYERWIDGET_H

#include <QWidget>

namespace Ui {
class playerwidget;
}

class playerwidget : public QWidget
{
    Q_OBJECT

public:
    explicit playerwidget(QWidget *parent = 0);
    ~playerwidget();



private:
    Ui::playerwidget *ui;
};

#endif // PLAYERWIDGET_H



