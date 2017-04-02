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

//    ui -> radioButton_3 -> setChecked(false);
//    ui -> radioButton_2 -> setChecked(false);
//    ui -> radioButton -> setChecked(false);

//    QObject::connect( ui -> spinBox, SIGNAL(valueChanged(int) ), this,
//                      SLOT(maxPlayers()));
//    QObject::connect( ui -> spinBox_2, SIGNAL(valueChanged(int) ), this,
//                      SLOT(maxPlayersCPU()));




//       players = ui -> spinBox -> value();
//      //connect(ui -> spinBox, SIGNAL(editingFinished()), this, SLOT(ui ->label_2 -> setNum(ui -> spinBox -> value())));

//        connect(ui -> radioButton, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        connect(ui -> radioButton_2, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        connect(ui -> radioButton_3, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));

    connect(ui -> pushButton, SIGNAL(pressed()), this, SLOT(startNewGame()));

//ui -> radioButton_3 -> setChecked(false);


//}
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




