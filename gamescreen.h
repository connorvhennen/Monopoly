
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

    //static void createPlayerWidget(player a);
    //QRect  getFrameGeometry(const QLabel* a) const;


//    static QString buyProp;
    //QPushButton* restart;
   // QPushButton* end;
    //QString* notif;
public slots:
//    void sliderManagement();
//    void sliderManagementP2();
    void playerTurn(player &a);
    void player2Turn(player& a);

    void playerTurn2(player& a);
    void player2Turn2(player& a);

    void playerTurn3(player& a);
    void player2Turn3(player& a);

    void playerTurn4(player& a);
    void player2Turn4(player& a);

    void playerTurn5(player& a);
    void player2Turn5(player& a);

    void playerTurn6(player& a);
    void player2Turn6(player& a);

    void playerTurn7(player& a);
    void player2Turn7(player& a);

    void playerTurn8(player& a);
    void player2Turn8(player& a);

    void playerTurn9(player& a);
    void playerTurn10(player& a);
    void playerTurn11(player& a);
    void playerTurn12(player& a);
    void playerTurn13(player& a);
    void playerTurn14(player& a);
    void playerTurn15(player& a);
    void playerTurn16(player& a);
    void playerTurn17(player& a);
    void playerTurn18(player& a);
    void playerTurn19(player& a);
    void playerTurn20(player& a);

    void player2Turn9(player& a);
    void player2Turn10(player& a);
    void player2Turn11(player& a);
    void player2Turn12(player& a);
    void player2Turn13(player& a);
    void player2Turn14(player& a);
    void player2Turn15(player& a);
    void player2Turn16(player& a);
    void player2Turn17(player& a);
    void player2Turn18(player& a);
    void player2Turn19(player& a);
    void player2Turn20(player& a);


//    void playerTurn5(player& a);
//    void player2Turn5(player& a);



private slots:


private:

    Ui::gamescreen *ui;



};

#endif // MAINWINDOW_H
