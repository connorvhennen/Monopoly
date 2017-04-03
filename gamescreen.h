
#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include <QLabel>
#include <QRect>

#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsView>
//#include <QObject>
#include <QString>
#include <QRect>
#include <QLabel>
#include <QGraphicsPixmapItem>
#include <algorithm>
#include <player.h>
#include <QStackedLayout>
#include <QSlider>

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

    void getWinner(player a, player b);
    void announceWinner(player a, player b);
    ~gamescreen();
    player a;
    player b;
    player c;
    player d;

public slots:
    void playerTurn();
    void player2Turn();

    void playerTurn2();
    void player2Turn2();

    void playerTurn3();
    void player2Turn3();

    void playerTurn4();
    void player2Turn4();

    void playerTurn5();
    void player2Turn5();

    void playerTurn6();
    void player2Turn6();

    void playerTurn7();
    void player2Turn7();

    void playerTurn8();
    void player2Turn8();

    void playerTurn9();
    void playerTurn10();
    void playerTurn11();
    void playerTurn12();
    void playerTurn13();
    void playerTurn14();
    void playerTurn15();
    void playerTurn16();
    void playerTurn17();
    void playerTurn18();
    void playerTurn19();
    void playerTurn20();

    void player2Turn9();
    void player2Turn10();
    void player2Turn11();
    void player2Turn12();
    void player2Turn13();
    void player2Turn14();
    void player2Turn15();
    void player2Turn16();
    void player2Turn17();
    void player2Turn18();
    void player2Turn19();
    void player2Turn20();


private:

    Ui::gamescreen *ui;

};

#endif // MAINWINDOW_H
