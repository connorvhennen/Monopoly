#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include <QLabel>
#include <QRect>

#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QRect>
#include <QLabel>
#include <QGraphicsPixmapItem>
#include <algorithm>
class player;
namespace Ui {
class gamescreen3;
}

class gamescreen3 : public QMainWindow
{
    Q_OBJECT


public:
    explicit gamescreen3(QWidget *parent = 0);
    void playerTurn(player& a);
    ~gamescreen3();

    //static void createPlayerWidget(player a);
    //QRect  getFrameGeometry(const QLabel* a) const;
    int playerCount;
private:
    Ui::gamescreen3 *ui;

};

#endif // MAINWINDOW_H
