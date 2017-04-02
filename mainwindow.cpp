#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QRadioButton>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamescreen.h"
#include "player.h"

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    QPixmap background(":myImages/uclaDrone.png");
    background = background.scaled(this -> size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this -> setPalette(palette);



    connect(ui -> pushButton, SIGNAL(pressed()), this, SLOT(startNewGame()));

}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::startNewGame()
{


    current_game = new gamescreen;



    current_game -> showFullScreen();
}




