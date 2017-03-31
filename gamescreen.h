
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
#include <QString>
#include <QRect>
#include <QLabel>
#include <QGraphicsPixmapItem>
#include <algorithm>
#include <player.h>

//class player;
namespace Ui {
class gamescreen;
}

class gamescreen : public QMainWindow
{
    Q_OBJECT

    friend class player;
public:
    explicit gamescreen(QWidget *parent = 0);
    void playerTurn(player& a);
    ~gamescreen();

    //static void createPlayerWidget(player a);
    //QRect  getFrameGeometry(const QLabel* a) const;
    int playerCount;

//    static QString buyProp;
private:
    Ui::gamescreen *ui;



};

#endif // MAINWINDOW_H
