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

    if(players == 2){
            player::player connor("Connor Hennen");
            player::player sal("Ricardo Salazar");
      }
    if(players == 3){
        player::player connor("Connor Hennen");
        player::player trump("Donald Trump");
        player::player obama("Barack Obama");
    }

    if(players == 4){
        player::player connor("Connor Hennen");
        player::player carnegie("Andrew Carnegie");
        player::player rock("Rockefeller");
        player::player sal("Ricardo Salazar");
    }
    //players = ui -> comboBox ->count();
    int store = players;
    current_game = new gamescreen;
    current_game -> playerCount = players;

    //or current_game->show();
//    if(store < 2){
//        gamescreen::ui -> verticalSlider_2->hide();
//        gamescreen::ui -> verticalSlider_6->hide();
//        gamescreen::ui -> horizontalSlider_4->hide();
//        gamescreen::ui -> horizontalSlider_5->hide();
//        gamescreen::ui -> verticalSlider_3->hide();
//        gamescreen::ui -> verticalSlider_8->hide();
//        gamescreen::ui -> horizontalSlider_3->hide();
//        gamescreen::ui -> horizontalSlider_8->hide();
//    }
//    else if(store < 3){
//        gamescreen::ui -> verticalSlider_2->hide();
//        gamescreen::ui -> verticalSlider_6->hide();
//        gamescreen::ui -> horizontalSlider_4->hide();
//        gamescreen::ui -> horizontalSlider_5->hide();
//    }

    current_game -> show();
}


//void mainwindow::maxPlayers(){

//    int cpu = ui -> spinBox -> value();
//    int human = ui -> spinBox_2 -> value();
//    int total = (cpu + human);
//    if(total > 4){
//        ui -> spinBox_2 ->setValue(human - 1);
//        human = total - 1;
//        total = cpu + human;
//    }

//}

//void mainwindow::maxPlayersCPU(){

//    int cpu = ui -> spinBox -> value();
//    int human = ui -> spinBox_2 -> value();
//    int total = (cpu + human);
//    if(total > 4){
//        ui -> spinBox ->setValue(cpu - 1);
//        cpu = total - 1;
//        total = cpu + human;
//    }

//}
//void mainwindow::updatePlayerCount(){
//    if(ui -> radioButton ->isChecked()){
//        players = 2;
//        ui -> radioButton_3 -> setChecked(false);
//        ui -> radioButton_2 -> setChecked(false);
//        connect(ui -> radioButton, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        disconnect(ui -> radioButton_2, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        disconnect(ui -> radioButton_3, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//    }

//    else if(ui -> radioButton_2 ->isChecked()){
//        players = 3;
//        ui -> radioButton -> setChecked(false);
//        ui -> radioButton_3 -> setChecked(false);
//        disconnect(ui -> radioButton, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        disconnect(ui -> radioButton_3, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        connect(ui -> radioButton_2, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//    }
//    else if(ui -> radioButton_3 ->isChecked()){
//        players = 4;
//        ui -> radioButton -> setChecked(false);
//        ui -> radioButton_2 -> setChecked(false);
//        connect(ui -> radioButton_3, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        disconnect(ui -> radioButton_2, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//        disconnect(ui -> radioButton, SIGNAL(pressed()),this, SLOT(updatePlayerCount()));
//}
//}
