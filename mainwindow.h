
class gamescreen;
class player;

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QAbstractButton>


namespace Ui {
class mainwindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT
private slots:

//    void maxPlayersCPU();
public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();

    int players;

private:
    Ui::mainwindow *ui;
    gamescreen* current_game;


public slots:
    //void updatePlayerCount();
    void startNewGame();
};

#endif // MAINWINDOW_H
