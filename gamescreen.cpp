#include <map>
#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "player.h"
#include "Gameboard.h"
#include <time.h>


gamescreen::gamescreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gamescreen)
{
    ui->setupUi(this);

    QPixmap background(":myImages/uclaDrone.png");
    background = background.scaled(this -> size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this -> setPalette(palette);

    std::srand(time(NULL));
    ui ->spinBox ->hide();
    ui ->spinBox ->setValue(10);
    ui ->spinBox_2 ->hide();
    ui ->spinBox_2 -> setValue(0);
    ui ->spinBox_3 ->hide();
    ui ->spinBox_3 -> setValue(0);
    ui ->spinBox_4 ->hide();
    ui ->spinBox_4 -> setValue(10);
    ui ->spinBox_5 ->hide();
    ui ->spinBox_6 ->hide();
    ui ->spinBox_7 ->hide();
    ui ->spinBox_8 ->hide();

    QImage image(":/boardpix/zbt.png");
    QImage image2 = image.scaled(100, 100, Qt::KeepAspectRatio);
    ui -> label1 ->setScaledContents(true);
    ui -> label1  ->setPixmap(QPixmap::fromImage(image2));

    QImage image3(":/boardpix/spaulding.png");
    QImage image4 = image3.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label2 ->setScaledContents(true);
    ui -> label2  ->setPixmap(QPixmap::fromImage(image4));

    QImage image5(":/boardpix/geneblock.png");
    QImage image6 = image5.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label3 ->setScaledContents(true);
    ui -> label3  ->setPixmap(QPixmap::fromImage(image6));

    QImage image7(":/boardpix/luskin.png");
    QImage image8 = image7.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label4 ->setScaledContents(true);
    ui -> label4  ->setPixmap(QPixmap::fromImage(image8));

    QImage patrick(":/boardpix/patrick.png");
    QImage patrick2 = patrick.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label5 ->setScaledContents(true);
    ui -> label5  ->setPixmap(QPixmap::fromImage(patrick2));

    QImage uber(":/boardpix/uber.png");
    QImage uber2 = uber.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label6 ->setScaledContents(true);
    ui -> label6  ->setPixmap(QPixmap::fromImage(uber2));

    QImage acker(":/boardpix/ackerman.png");
    QImage acker2 = acker.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label7 ->setScaledContents(true);
    ui -> label7  ->setPixmap(QPixmap::fromImage(acker2));

    QImage usac(":/boardpix/usac.png");
    QImage usac2 = usac.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label8 ->setScaledContents(true);
    ui -> label8  ->setPixmap(QPixmap::fromImage(usac2));

    QImage kerk(":/boardpix/kerckhoff.jpg");
    QImage kerk2 = kerk.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label9 ->setScaledContents(true);
    ui -> label9  ->setPixmap(QPixmap::fromImage(kerk2));

    QImage ms(":/boardpix/mathscience.png");
    QImage ms2 = ms.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label10 ->setScaledContents(true);
    ui -> label10  ->setPixmap(QPixmap::fromImage(ms2));

    QImage probation(":/boardpix/academic prob.jpg");
    QImage probation2 = probation.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label11 ->setScaledContents(true);
    ui -> label11  ->setPixmap(QPixmap::fromImage(probation2));

    QImage powell(":/boardpix/powell.png");
    QImage powell2 = powell.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label12 ->setScaledContents(true);
    ui -> label12  ->setPixmap(QPixmap::fromImage(powell2));

    QImage powellStudy(":/powellPic/powellstudyroom.jpg");
    QImage powellStudy2 = powellStudy.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label13 ->setScaledContents(true);
    ui -> label13  ->setPixmap(QPixmap::fromImage(powellStudy2));

    QImage royce(":/boardpix/royce.png");
    QImage royce2 = royce.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label14 ->setScaledContents(true);
    ui -> label14  ->setPixmap(QPixmap::fromImage(royce2));

    QImage yrl(":/boardpix/yrl1.jpg");
    QImage yrl2 = yrl.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label15 ->setScaledContents(true);
    ui -> label15  ->setPixmap(QPixmap::fromImage(yrl2));

    QImage lyft(":/boardpix/lyft.jpg");
    QImage lyft2 = lyft.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label16 ->setScaledContents(true);
    ui -> label16  ->setPixmap(QPixmap::fromImage(lyft2));

    QImage nlights(":/boardpix/northernlights.jpeg");
    QImage nlights2 = nlights.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label17 ->setScaledContents(true);
    ui -> label17  ->setPixmap(QPixmap::fromImage(nlights2));


    ui -> label18 ->setScaledContents(true);
    ui -> label18  ->setPixmap(QPixmap::fromImage(image6));

    QImage im(":/boardpix/imfield.png");
    QImage im2 = im.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label19 ->setScaledContents(true);
    ui -> label19  ->setPixmap(QPixmap::fromImage(im2));

    QImage sun(":/boardpix/sunset.jpg");
    QImage sun2 = sun.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label20 ->setScaledContents(true);
    ui -> label20  ->setPixmap(QPixmap::fromImage(sun2));

    QImage parking(":/boardpix/parking.jpg");
    QImage parking2 = parking.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label21 ->setScaledContents(true);
    ui -> label21  ->setPixmap(QPixmap::fromImage(parking2));

    QImage hedrick(":/boardpix/hedrick.jpg");
    QImage hedrick2 = hedrick.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label22 ->setScaledContents(true);
    ui -> label22  ->setPixmap(QPixmap::fromImage(hedrick2));

    ui -> label23 ->setScaledContents(true);
    ui -> label23  ->setPixmap(QPixmap::fromImage(usac2));

    QImage rende(":/boardpix/rende.jpg");
    QImage rende2 = rende.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label24 ->setScaledContents(true);
    ui -> label24  ->setPixmap(QPixmap::fromImage(rende2));

    QImage bplate(":/boardpix/bplate.jpg");
    QImage bplate2 = bplate.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label25 ->setScaledContents(true);
    ui -> label25  ->setPixmap(QPixmap::fromImage(bplate2));

    QImage fly(":/boardpix/laxflyaway.jpg");
    QImage fly2 = fly.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label26 ->setScaledContents(true);
    ui -> label26  ->setPixmap(QPixmap::fromImage(fly2));

    QImage bfit(":/boardpix/bfit.jpg");
    QImage bfit2 = bfit.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label27 ->setScaledContents(true);
    ui -> label27  ->setPixmap(QPixmap::fromImage(bfit2));

    QImage tennis(":/boardpix/UCLA_tennis_courts.jpg");
    QImage tennis2 = tennis.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label28 ->setScaledContents(true);
    ui -> label28  ->setPixmap(QPixmap::fromImage(tennis2));

    QImage pwr(":/boardpix/yrl outlet.png");
    QImage pwr2 = pwr.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label29 ->setScaledContents(true);
    ui -> label29  ->setPixmap(QPixmap::fromImage(pwr2));

    QImage invertedFountain(":/boardpix/inverted fountain.jpg");
    QImage invertedFountain2 = invertedFountain.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label30 ->setScaledContents(true);
    ui -> label30  ->setPixmap(QPixmap::fromImage(invertedFountain2));

    QImage jail(":/boardpix/goToJail.png");
    QImage jail2 = jail.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label31 ->setScaledContents(true);
    ui -> label31  ->setPixmap(QPixmap::fromImage(jail2));

    QImage sculpt(":/boardpix/sculpture.jpg");
    QImage sculpt2 = sculpt.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label32 ->setScaledContents(true);
    ui -> label32  ->setPixmap(QPixmap::fromImage(sculpt2));

    QImage janns(":/boardpix/Janss_Steps,_UCLA.jpg");
    QImage janns2 = janns.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label33 ->setScaledContents(true);
    ui -> label33  ->setPixmap(QPixmap::fromImage(janns2));


    ui -> label34 ->setScaledContents(true);
    ui -> label34  ->setPixmap(QPixmap::fromImage(image6));

    QImage wooden(":/boardpix/wooden.jpeg");
    QImage wooden2 = wooden.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label35 ->setScaledContents(true);
    ui -> label35  ->setPixmap(QPixmap::fromImage(wooden2));

    QImage taxi(":/taxiImage/taxi.png");
    QImage taxi2 = taxi.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label36 ->setScaledContents(true);
    ui -> label36  ->setPixmap(QPixmap::fromImage(taxi2));

    ui -> label37 ->setScaledContents(true);
    ui -> label37  ->setPixmap(QPixmap::fromImage(usac2));

    QImage inNout(":/boardpix/in n out.jpg");
    QImage inNout2 = inNout.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label38 ->setScaledContents(true);
    ui -> label38  ->setPixmap(QPixmap::fromImage(inNout2));

    QImage textbook(":/boardpix/textbook fee.jpeg");
    QImage textbook2 = textbook.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label39 ->setScaledContents(true);
    ui -> label39  ->setPixmap(QPixmap::fromImage(textbook2));

    QImage bruinwalk(":/boardpix/bruinwalk.jpg");
    QImage bruinwalk2 = bruinwalk.scaled(80, 100, Qt::KeepAspectRatio);
    ui -> label40 ->setScaledContents(true);
    ui -> label40  ->setPixmap(QPixmap::fromImage(bruinwalk2));

    QImage chancePic(":/chancedeckphoto/monopoly_card21.jpg");
    QImage comPic(":/uclaFreeAnd4Sale/freeandforsale.jpg");
    QImage comPic2 = comPic.scaled(150, 100, Qt::KeepAspectRatio);
    QImage chancePic2 = chancePic.scaled(80, 100, Qt::KeepAspectRatio);
    //ui -> label_238 -> setScaledContents(true);
    ui -> label_240 -> setScaledContents(true);
    ui -> label_240 -> setPixmap(QPixmap::fromImage(comPic2));
    ui -> label_239-> setScaledContents(true);
    ui -> label_239 -> setPixmap(QPixmap::fromImage(chancePic2));
   // std::for_each(playerMap.begin() -> second,playerMap.end() -> second,createPlayerWidget);
    //ui -> label1 ->geo

//    ui -> graphicsView -> fram
//    QFrame::Shape cirle;
//   ui -> graphicsView ->setFrameShape(cirle);

    ui -> horizontalSlider -> setValue(10);
    ui -> horizontalSlider -> setMaximum(10);
    ui -> horizontalSlider_2 -> setValue(10);
    ui -> horizontalSlider_2 -> setMaximum(10);
    ui -> horizontalSlider_3 -> setValue(10);
    ui -> horizontalSlider_3 -> setMaximum(10);

    ui -> horizontalSlider_4 -> setValue(10);
    ui -> horizontalSlider_4 -> setMaximum(10);
    ui -> horizontalSlider_5 -> setValue(0);
    ui -> horizontalSlider_5 -> setMaximum(10);
    ui -> horizontalSlider_6 -> setValue(0);
    ui -> horizontalSlider_6 -> setMaximum(10);
    ui -> horizontalSlider_7 -> setValue(0);
    ui -> horizontalSlider_7 -> setMaximum(10);
    ui -> horizontalSlider_8 -> setValue(0);
    ui -> horizontalSlider_8 -> setMaximum(10);

    ui ->winnerlabel ->hide();
    ui ->widget_8 ->hide();

    ui -> verticalSlider -> setValue(0);
    ui -> verticalSlider -> setMaximum(10);
    ui -> verticalSlider_2 -> setValue(0);
    ui -> verticalSlider_2 -> setMaximum(10);
    ui -> verticalSlider_3 -> setValue(0);
    ui -> verticalSlider_3 -> setMaximum(10);
    ui -> verticalSlider_4 -> setValue(0);
    ui -> verticalSlider_4 -> setMaximum(10);
    ui -> verticalSlider_5 -> setValue(10);
    ui -> verticalSlider_5 -> setMaximum(10);
    ui -> verticalSlider_6 -> setValue(10);
    ui -> verticalSlider_6 -> setMaximum(10);
    ui -> verticalSlider_7 -> setValue(10);
    ui -> verticalSlider_7 -> setMaximum(10);
    ui -> verticalSlider_8 -> setValue(10);
    ui -> verticalSlider_8 -> setMaximum(10);

    ui -> verticalSlider_2->show();
    ui -> verticalSlider_6->show();
    ui -> horizontalSlider_4->show();
    ui -> horizontalSlider_5->show();
    ui -> verticalSlider_3->show();
    ui -> verticalSlider_8->show();
    ui -> horizontalSlider_3->show();
    ui -> horizontalSlider_8->show();

    ui -> widget_4 -> hide();
    ui -> widget_3 -> hide();
    ui -> widget_2 -> hide();
    ui ->widget_9 ->hide();

    ui ->page ->hide();
    ui ->page_2 ->hide();
    ui ->page_3 ->hide();
    ui ->page_4 ->hide();
    ui ->page_7 ->hide();
    ui ->page_8 ->hide();
    ui ->page_5->hide();
    ui ->page_6->hide();
    ui ->page_9l ->hide();
    ui ->page_9m ->hide();
    ui ->page_9r ->hide();

    ui ->page_10l ->hide();
    ui ->page_11l ->hide();
    ui ->page_12l ->hide();
    ui ->page_13l ->hide();
    ui ->page_14l ->hide();
    ui ->page_15l->hide();
    ui ->page_16l->hide();
    ui ->page_17l ->hide();
    ui ->page_18l->hide();
    ui ->page_19l ->hide();
    ui ->page_20l ->hide();
    ui ->page_21l ->hide();
    ui ->page_22l ->hide();
    ui ->page_23l->hide();
    ui ->page_24l->hide();

    ui ->page_10m ->hide();
    ui ->page_11m ->hide();
    ui ->page_12m ->hide();
    ui ->page_13m ->hide();
    ui ->page_14m ->hide();
    ui ->page_15m->hide();
    ui ->page_16m->hide();
    ui ->page_17m ->hide();
    ui ->page_18m->hide();
    ui ->page_19m ->hide();
    ui ->page_20m ->hide();
    ui ->page_21m ->hide();
    ui ->page_22m ->hide();
    ui ->page_23m->hide();
    ui ->page_24m->hide();
    ui ->page_25m ->hide();

    ui ->page_10r ->hide();
    ui ->page_11r ->hide();
    ui ->page_12r ->hide();
    ui ->page_13r ->hide();
    ui ->page_14r ->hide();
    ui ->page_15r->hide();
    ui ->page_16r->hide();
    ui ->page_17r ->hide();
    ui ->page_18r->hide();
    ui ->page_19r ->hide();
    ui ->page_20r ->hide();
    ui ->page_21r ->hide();
    ui ->page_22r ->hide();
    ui ->page_23r->hide();
    ui ->page_24r->hide();

    ui ->page_26m -> hide();
    ui ->page_27m -> hide();
    ui ->page_28m -> hide();
    ui ->page_29m -> hide();
    ui ->page_30m -> hide();
    ui ->page_31m -> hide();
    ui ->page_32m -> hide();
    ui ->page_33m -> hide();
    ui ->page_34m -> hide();
    ui ->page_35m -> hide();
    ui ->page_36m -> hide();
    ui ->page_37m -> hide();
    ui ->page_38m -> hide();
    ui ->page_39m -> hide();
    ui ->page_40m -> hide();
    ui ->page_41m -> hide();
    ui ->page_42m -> hide();
    ui ->page_43m -> hide();
    ui ->page_44m -> hide();
    ui ->page_45m -> hide();
    ui ->page_46m -> hide();
    ui ->page_47m -> hide();
    ui ->page_48m -> hide();
    ui ->page_49m -> hide();
    ui ->page_50m -> hide();
    ui ->page_51m -> hide();
    ui ->page_52m -> hide();
    ui ->page_53m -> hide();
    ui ->page_54m -> hide();



    ui ->stackedWidget ->hide();
    ui ->stackedWidget_2 ->hide();
    ui ->stackedWidget_3 ->hide();

    player("P1",1,1500);
    player("P2",1,1500);
    std::map<int, player*>::iterator itBegin;
    itBegin = playerMap.begin();
    player p1 = *itBegin -> second;
    ++itBegin;
    player p2 = *itBegin -> second;

    ui ->widget_5 -> hide();
    ui -> widget_5 ->hide();
    ui ->widget_7->hide();
    ui ->widget_9 ->hide();
    ui ->widget_6->hide();

    connect(ui ->spinBox,SIGNAL(valueChanged(int)),ui ->horizontalSlider,SLOT(setValue(int)));
    connect(ui ->spinBox_2,SIGNAL(valueChanged(int)),ui ->verticalSlider,SLOT(setValue(int)));
    connect(ui ->spinBox_3,SIGNAL(valueChanged(int)),ui ->horizontalSlider_7,SLOT(setValue(int)));
    connect(ui ->spinBox_4,SIGNAL(valueChanged(int)),ui ->verticalSlider_5,SLOT(setValue(int)));

    playerTurn(p1);



    connect(ui ->pushButton_5,SIGNAL(clicked()),ui -> widget_2,SLOT(show()));





    player2Turn(p2);
    connect(ui ->pushButton_3,SIGNAL(clicked()),ui -> widget_3,SLOT(show()));

    playerTurn2(p1);
    connect(ui ->pushButton_12,SIGNAL(clicked()),ui -> widget_5,SLOT(show()));

     player2Turn2(p2);
    connect(ui -> pushButton_13, SIGNAL(clicked()),ui ->widget_6,SLOT(show()));

    connect(ui -> pushButton_11,SIGNAL(clicked()), ui ->page_5, SLOT(show()));

    playerTurn3(p1);
    connect(ui ->pushButton_18, SIGNAL(clicked()), ui ->page, SLOT(show()));
    connect(ui ->pushButton_18, SIGNAL(clicked()), ui ->page_5, SLOT(deleteLater()));

//    connect(ui ->pushButton_14, SIGNAL(clicked()), ui ->stackedWidget, SLOT(hide()));
    connect(ui ->pushButton_14,SIGNAL(clicked()),ui ->page, SLOT(deleteLater()));
    connect(ui ->pushButton_14,SIGNAL(clicked()),ui ->stackedWidget_3, SLOT(show()));
    connect(ui ->pushButton_14,SIGNAL(clicked()),ui ->page_6, SLOT(show()));

    player2Turn3(p2);
    connect(ui ->pushButton_19,SIGNAL(clicked()),ui ->stackedWidget_2, SLOT(show()));
    connect(ui ->pushButton_19,SIGNAL(clicked()),ui ->page_3, SLOT(show()));
    connect(ui ->pushButton_19,SIGNAL(clicked()),ui ->stackedWidget_3, SLOT(hide()));
    connect(ui ->pushButton_19,SIGNAL(clicked()),ui ->page_6, SLOT(deleteLater()));

    connect(ui -> pushButton_16, SIGNAL(clicked()), ui ->stackedWidget_3, SLOT(show()));
    connect(ui -> pushButton_16, SIGNAL(clicked()), ui ->page_7, SLOT(show()));
    connect(ui -> pushButton_16, SIGNAL(clicked()), ui ->stackedWidget_2, SLOT(hide()));
    connect(ui -> pushButton_16, SIGNAL(clicked()), ui ->page_3, SLOT(deleteLater()));

    playerTurn4(p1);
    connect(ui ->pushButton_20,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_20,SIGNAL(clicked()), ui ->page_2,SLOT(show()));
    connect(ui ->pushButton_20,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_20,SIGNAL(clicked()), ui ->page_7,SLOT(deleteLater()));

    connect(ui ->pushButton_15,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_15,SIGNAL(clicked()), ui ->page_2,SLOT(deleteLater()));
    connect(ui ->pushButton_15,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_15,SIGNAL(clicked()), ui ->page_8,SLOT(show()));


    player2Turn4(p2);
    connect(ui ->pushButton_21,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_21,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_21,SIGNAL(clicked()), ui ->page_4,SLOT(show()));
    connect(ui ->pushButton_21,SIGNAL(clicked()), ui ->page_8,SLOT(deleteLater()));

    connect(ui -> pushButton_17, SIGNAL(clicked()), ui ->stackedWidget_3, SLOT(show()));
    connect(ui -> pushButton_17, SIGNAL(clicked()), ui ->page_9m, SLOT(show()));
    connect(ui -> pushButton_17, SIGNAL(clicked()), ui ->stackedWidget_2, SLOT(hide()));
    connect(ui -> pushButton_17, SIGNAL(clicked()), ui ->page_4, SLOT(deleteLater()));


    playerTurn5(p1);
    connect(ui ->pushButton_m1,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m1,SIGNAL(clicked()), ui ->page_9l,SLOT(show()));
    connect(ui ->pushButton_m1,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m1,SIGNAL(clicked()), ui ->page_9m,SLOT(deleteLater()));
    connect(ui ->pushButton_l1,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l1,SIGNAL(clicked()), ui ->page_9l,SLOT(deleteLater()));
    connect(ui ->pushButton_l1,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l1,SIGNAL(clicked()), ui ->page_10m,SLOT(show()));

    player2Turn5(p2);
    connect(ui ->pushButton_m2,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m2,SIGNAL(clicked()), ui ->page_9r,SLOT(show()));
    connect(ui ->pushButton_m2,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m2,SIGNAL(clicked()), ui ->page_10m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1,SIGNAL(clicked()), ui ->page_9r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1,SIGNAL(clicked()), ui ->page_11m,SLOT(show()));

    //----------------------------------------------------------------------------------------------------------------------------//
    playerTurn6(p1);

    connect(ui ->pushButton_m3,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m3,SIGNAL(clicked()), ui ->page_10l,SLOT(show()));
    connect(ui ->pushButton_m3,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m3,SIGNAL(clicked()), ui ->page_11m,SLOT(deleteLater()));

    connect(ui ->pushButton_l2,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l2,SIGNAL(clicked()), ui ->page_10l,SLOT(deleteLater()));
    connect(ui ->pushButton_l2,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l2,SIGNAL(clicked()), ui ->page_12m,SLOT(show()));


    player2Turn6(p2);
    connect(ui ->pushButton_m4,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m4,SIGNAL(clicked()), ui ->page_10r,SLOT(show()));
    connect(ui ->pushButton_m4,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m4,SIGNAL(clicked()), ui ->page_12m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_2,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_2,SIGNAL(clicked()), ui ->page_10r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_2,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_2,SIGNAL(clicked()), ui ->page_13m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn7(p1);
    connect(ui ->pushButton_m5,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m5,SIGNAL(clicked()), ui ->page_11l,SLOT(show()));
    connect(ui ->pushButton_m5,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m5,SIGNAL(clicked()), ui ->page_13m,SLOT(deleteLater()));

    connect(ui ->pushButton_l3,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l3,SIGNAL(clicked()), ui ->page_11l,SLOT(deleteLater()));
    connect(ui ->pushButton_l3,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l3,SIGNAL(clicked()), ui ->page_14m,SLOT(show()));

    player2Turn7(p2);
    connect(ui ->pushButton_m6,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m6,SIGNAL(clicked()), ui ->page_11r,SLOT(show()));
    connect(ui ->pushButton_m6,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m6,SIGNAL(clicked()), ui ->page_14m,SLOT(deleteLater()));

    connect(ui ->pushButton_r1_3,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_3,SIGNAL(clicked()), ui ->page_11r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_3,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_3,SIGNAL(clicked()), ui ->page_15m,SLOT(show()));


    //----------------------------------------------------------------------------------------------------------------------------//
    playerTurn8(p1);
    connect(ui ->pushButton_m7,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m7,SIGNAL(clicked()), ui ->page_12l,SLOT(show()));
    connect(ui ->pushButton_m7,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m7,SIGNAL(clicked()), ui ->page_15m,SLOT(deleteLater()));

    connect(ui ->pushButton_l4,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l4,SIGNAL(clicked()), ui ->page_12l,SLOT(deleteLater()));
    connect(ui ->pushButton_l4,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l4,SIGNAL(clicked()), ui ->page_16m,SLOT(show()));

    player2Turn8(p2);
    connect(ui ->pushButton_m8,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m8,SIGNAL(clicked()), ui ->page_12r,SLOT(show()));
    connect(ui ->pushButton_m8,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m8,SIGNAL(clicked()), ui ->page_16m,SLOT(deleteLater()));

    connect(ui ->pushButton_r1_4,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_4,SIGNAL(clicked()), ui ->page_12r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_4,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_4,SIGNAL(clicked()), ui ->page_17m,SLOT(show()));

    //----------------------------------------------------------------------------------------------------------------------------//
    playerTurn9(p1);
    connect(ui ->pushButton_m9,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m9,SIGNAL(clicked()), ui ->page_13l,SLOT(show()));
    connect(ui ->pushButton_m9,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m9,SIGNAL(clicked()), ui ->page_17m,SLOT(deleteLater()));

    connect(ui ->pushButton_l5,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l5,SIGNAL(clicked()), ui ->page_13l,SLOT(deleteLater()));
    connect(ui ->pushButton_l5,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l5,SIGNAL(clicked()), ui ->page_18m,SLOT(show()));

    player2Turn9(p2);
    connect(ui ->pushButton_m10,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m10,SIGNAL(clicked()), ui ->page_13r,SLOT(show()));
    connect(ui ->pushButton_m10,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m10,SIGNAL(clicked()), ui ->page_18m,SLOT(deleteLater()));

    connect(ui ->pushButton_r1_5,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_5,SIGNAL(clicked()), ui ->page_13r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_5,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_5,SIGNAL(clicked()), ui ->page_19m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn10(p1);
    connect(ui ->pushButton_m11,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m11,SIGNAL(clicked()), ui ->page_14l,SLOT(show()));
    connect(ui ->pushButton_m11,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m11,SIGNAL(clicked()), ui ->page_19m,SLOT(deleteLater()));
    connect(ui ->pushButton_l6,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l6,SIGNAL(clicked()), ui ->page_14l,SLOT(deleteLater()));
    connect(ui ->pushButton_l6,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l6,SIGNAL(clicked()), ui ->page_20m,SLOT(show()));

    player2Turn10(p2);
    connect(ui ->pushButton_m12,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m12,SIGNAL(clicked()), ui ->page_14r,SLOT(show()));
    connect(ui ->pushButton_m12,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m12,SIGNAL(clicked()), ui ->page_20m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_6,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_6,SIGNAL(clicked()), ui ->page_14r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_6,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_6,SIGNAL(clicked()), ui ->page_21m,SLOT(show()));


//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn11(p1);
    connect(ui ->pushButton_m13,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m13,SIGNAL(clicked()), ui ->page_15l,SLOT(show()));
    connect(ui ->pushButton_m13,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m13,SIGNAL(clicked()), ui ->page_21m,SLOT(deleteLater()));
    connect(ui ->pushButton_l7,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l7,SIGNAL(clicked()), ui ->page_15l,SLOT(deleteLater()));
    connect(ui ->pushButton_l7,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l7,SIGNAL(clicked()), ui ->page_22m,SLOT(show()));

    player2Turn11(p2);
    connect(ui ->pushButton_m14,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m14,SIGNAL(clicked()), ui ->page_15r,SLOT(show()));
    connect(ui ->pushButton_m14,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m14,SIGNAL(clicked()), ui ->page_22m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_7,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_7,SIGNAL(clicked()), ui ->page_15r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_7,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_7,SIGNAL(clicked()), ui ->page_23m,SLOT(show()));


//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn12(p1);
    connect(ui ->pushButton_m15,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m15,SIGNAL(clicked()), ui ->page_16l,SLOT(show()));
    connect(ui ->pushButton_m15,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m15,SIGNAL(clicked()), ui ->page_23m,SLOT(deleteLater()));
    connect(ui ->pushButton_l8,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l8,SIGNAL(clicked()), ui ->page_16l,SLOT(deleteLater()));
    connect(ui ->pushButton_l8,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l8,SIGNAL(clicked()), ui ->page_24m,SLOT(show()));

    player2Turn12(p2);
    connect(ui ->pushButton_m16,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m16,SIGNAL(clicked()), ui ->page_16r,SLOT(show()));
    connect(ui ->pushButton_m16,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m16,SIGNAL(clicked()), ui ->page_24m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_8,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_8,SIGNAL(clicked()), ui ->page_16r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_8,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_8,SIGNAL(clicked()), ui ->page_25m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn13(p1);
    connect(ui ->pushButton_m17,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17,SIGNAL(clicked()), ui ->page_17l,SLOT(show()));
    connect(ui ->pushButton_m17,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17,SIGNAL(clicked()), ui ->page_25m,SLOT(deleteLater()));

    connect(ui ->pushButton_l9,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l9,SIGNAL(clicked()), ui ->page_17l,SLOT(deleteLater()));
    connect(ui ->pushButton_l9,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l9,SIGNAL(clicked()), ui ->page_26m,SLOT(show()));

    player2Turn13(p2);
    connect(ui ->pushButton_m17_2,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_2,SIGNAL(clicked()), ui ->page_17r,SLOT(show()));
    connect(ui ->pushButton_m17_2,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_2,SIGNAL(clicked()), ui ->page_26m,SLOT(deleteLater()));

    connect(ui ->pushButton_r1_9,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_9,SIGNAL(clicked()), ui ->page_17r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_9,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_9,SIGNAL(clicked()), ui ->page_26m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn14(p1);
    connect(ui ->pushButton_m17_3,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_3,SIGNAL(clicked()), ui ->page_18l,SLOT(show()));
    connect(ui ->pushButton_m17_3,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_3,SIGNAL(clicked()), ui ->page_26m,SLOT(deleteLater()));
    connect(ui ->pushButton_l10,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l10,SIGNAL(clicked()), ui ->page_18l,SLOT(deleteLater()));
    connect(ui ->pushButton_l10,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l10,SIGNAL(clicked()), ui ->page_27m,SLOT(show()));

    player2Turn14(p2);
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->page_18r,SLOT(show()));
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->page_27m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_10,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_10,SIGNAL(clicked()), ui ->page_18r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_10,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_10,SIGNAL(clicked()), ui ->page_28m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn15(p1);
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->page_19l,SLOT(show()));
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_4,SIGNAL(clicked()), ui ->page_28m,SLOT(deleteLater()));
    connect(ui ->pushButton_l11,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l11,SIGNAL(clicked()), ui ->page_19l,SLOT(deleteLater()));
    connect(ui ->pushButton_l11,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l11,SIGNAL(clicked()), ui ->page_29m,SLOT(show()));

    player2Turn15(p2);
    connect(ui ->pushButton_m17_5,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_5,SIGNAL(clicked()), ui ->page_19r,SLOT(show()));
    connect(ui ->pushButton_m17_5,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_5,SIGNAL(clicked()), ui ->page_29m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_11,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_11,SIGNAL(clicked()), ui ->page_19r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_11,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_11,SIGNAL(clicked()), ui ->page_30m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    playerTurn16(p1);
    connect(ui ->pushButton_m17_6,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_6,SIGNAL(clicked()), ui ->page_20l,SLOT(show()));
    connect(ui ->pushButton_m17_6,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_6,SIGNAL(clicked()), ui ->page_30m,SLOT(deleteLater()));
    connect(ui ->pushButton_l12,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l12,SIGNAL(clicked()), ui ->page_20l,SLOT(deleteLater()));
    connect(ui ->pushButton_l12,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l12,SIGNAL(clicked()), ui ->page_31m,SLOT(show()));

    player2Turn16(p2);
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->page_20r,SLOT(show()));
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->page_31m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_12,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_12,SIGNAL(clicked()), ui ->page_20r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_12,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_12,SIGNAL(clicked()), ui ->page_32m,SLOT(show()));

//----------------------------------------------------------------------------------------------------------------------------//
    if(p1.netWorth >=0 && p2.netWorth >= 0){
    playerTurn17(p1);
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->page_21l,SLOT(show()));
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_7,SIGNAL(clicked()), ui ->page_32m,SLOT(deleteLater()));
    connect(ui ->pushButton_l13,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l13,SIGNAL(clicked()), ui ->page_21l,SLOT(deleteLater()));
    connect(ui ->pushButton_l13,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l13,SIGNAL(clicked()), ui ->page_33m,SLOT(show()));
    }
    if(p1.netWorth >=0 && p2.netWorth >= 0){
    player2Turn17(p2);
    connect(ui ->pushButton_m17_8,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_8,SIGNAL(clicked()), ui ->page_21r,SLOT(show()));
    connect(ui ->pushButton_m17_8,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_8,SIGNAL(clicked()), ui ->page_33m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_13,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_13,SIGNAL(clicked()), ui ->page_21r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_13,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_13,SIGNAL(clicked()), ui ->page_34m,SLOT(show()));
    }

//----------------------------------------------------------------------------------------------------------------------------//
    if(p1.netWorth  >=0 && p2.netWorth  >= 0){
    playerTurn18(p1);
    connect(ui ->pushButton_m17_9,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_9,SIGNAL(clicked()), ui ->page_22l,SLOT(show()));
    connect(ui ->pushButton_m17_9,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_9,SIGNAL(clicked()), ui ->page_34m,SLOT(deleteLater()));
    connect(ui ->pushButton_l14,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l14,SIGNAL(clicked()), ui ->page_22l,SLOT(deleteLater()));
    connect(ui ->pushButton_l14,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l14,SIGNAL(clicked()), ui ->page_35m,SLOT(show()));
    }

    if(p1.netWorth  >=0 && p2.netWorth  >= 0){
    player2Turn18(p2);
    connect(ui ->pushButton_m17_10,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_10,SIGNAL(clicked()), ui ->page_22r,SLOT(show()));
    connect(ui ->pushButton_m17_10,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_10,SIGNAL(clicked()), ui ->page_35m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_14,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_14,SIGNAL(clicked()), ui ->page_22r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_14,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_14,SIGNAL(clicked()), ui ->page_36m,SLOT(show()));
    }
//----------------------------------------------------------------------------------------------------------------------------//
    if(p1.netWorth  >=0 && p2.netWorth  >= 0){
    playerTurn19(p1);
    connect(ui ->pushButton_m17_11,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_11,SIGNAL(clicked()), ui ->page_23l,SLOT(show()));
    connect(ui ->pushButton_m17_11,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_11,SIGNAL(clicked()), ui ->page_36m,SLOT(deleteLater()));
    connect(ui ->pushButton_l15,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l15,SIGNAL(clicked()), ui ->page_23l,SLOT(deleteLater()));
    connect(ui ->pushButton_l15,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l15,SIGNAL(clicked()), ui ->page_37m,SLOT(show()));
       }
    if(p1.netWorth  >=0 && p2.netWorth  >= 0){
    player2Turn19(p2);
    connect(ui ->pushButton_m17_12,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_12,SIGNAL(clicked()), ui ->page_23r,SLOT(show()));
    connect(ui ->pushButton_m17_12,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_12,SIGNAL(clicked()), ui ->page_37m,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_15,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_15,SIGNAL(clicked()), ui ->page_23r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_15,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_15,SIGNAL(clicked()), ui ->page_38m,SLOT(show()));
    }
//----------------------------------------------------------------------------------------------------------------------------//
if(p1.netWorth  >=0 && p2.netWorth  >= 0){
    playerTurn20(p1);
    connect(ui ->pushButton_m17_13,SIGNAL(clicked()), ui ->stackedWidget,SLOT(show()));
    connect(ui ->pushButton_m17_13,SIGNAL(clicked()), ui ->page_24l,SLOT(show()));
    connect(ui ->pushButton_m17_13,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_13,SIGNAL(clicked()), ui ->page_38m,SLOT(deleteLater()));

    connect(ui ->pushButton_l16,SIGNAL(clicked()), ui ->stackedWidget,SLOT(hide()));
    connect(ui ->pushButton_l16,SIGNAL(clicked()), ui ->page_24l,SLOT(deleteLater()));
    connect(ui ->pushButton_l16,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_l16,SIGNAL(clicked()), ui ->page_39m,SLOT(show()));
}
    if(p1.netWorth  >=0 && p2.netWorth  >= 0){
    player2Turn20(p2);
    connect(ui ->pushButton_m17_14,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(show()));
    connect(ui ->pushButton_m17_14,SIGNAL(clicked()), ui ->page_24r,SLOT(show()));
    connect(ui ->pushButton_m17_14,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(hide()));
    connect(ui ->pushButton_m17_14,SIGNAL(clicked()), ui ->page_39m,SLOT(deleteLater()));

    connect(ui ->pushButton_r1_16,SIGNAL(clicked()), ui ->stackedWidget_2,SLOT(hide()));
    connect(ui ->pushButton_r1_16,SIGNAL(clicked()), ui ->page_24r,SLOT(deleteLater()));
    connect(ui ->pushButton_r1_16,SIGNAL(clicked()), ui ->stackedWidget_3,SLOT(show()));
    connect(ui ->pushButton_r1_16,SIGNAL(clicked()), ui ->page_40m,SLOT(show()));
}

    if(p1.netWorth  >=0 && p2.netWorth  >= 0){
        getWinner(p1,p2);
    }

    if(p1.netWorth < 0 || p2.netWorth<0){
        announceWinner(p1,p2);
    }

}

void gamescreen::playerTurn(player& a){

    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }


    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label ->setText(movementDialogue);
    ui ->label_5 ->setText(locationDialogue);
    ui ->label_7 ->setText(moneyDialogue);


}

void gamescreen::playerTurn2(player& a){

    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }

    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_15 ->setText(movementDialogue);
    ui ->label_17 ->setText(locationDialogue);
    ui ->label_19 ->setText(moneyDialogue);


}


void gamescreen::playerTurn3(player& a){

    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }


    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_52 ->setText(movementDialogue);
    ui ->label_50 ->setText(locationDialogue);
    ui ->label_55 ->setText(moneyDialogue);


}

void gamescreen::playerTurn4(player& a){

    a.turn();


    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_58 ->setText(movementDialogue);
    ui ->label_56 ->setText(locationDialogue);
    ui ->label_61 ->setText(moneyDialogue);


}


void gamescreen::playerTurn5(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }

    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);
    QString netWorthDialogue = "$" + QString::number(a.netWorth);
    ui ->label_01 ->setText(movementDialogue);
    ui ->label_02 ->setText(locationDialogue);
    ui ->label_03 ->setText(moneyDialogue);
    ui -> label_04 ->setText(netWorthDialogue);

}

void gamescreen::playerTurn6(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1 ->setText(movementDialogue);
    ui ->label_l2 ->setText(locationDialogue);
    ui ->label_l3 ->setText(moneyDialogue);


}

void gamescreen::playerTurn7(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }

    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_2 ->setText(movementDialogue);
    ui ->label_l2_2 ->setText(locationDialogue);
    ui ->label_l3_2 ->setText(moneyDialogue);





}

void gamescreen::playerTurn8(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_3 ->setText(movementDialogue);
    ui ->label_l2_3 ->setText(locationDialogue);
    ui ->label_l3_3 ->setText(moneyDialogue);



}

void gamescreen::playerTurn9(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_4 ->setText(movementDialogue);
    ui ->label_l2_4 ->setText(locationDialogue);
    ui ->label_l3_4 ->setText(moneyDialogue);

}


void gamescreen::playerTurn10(player& a){
a.turn();
int playerLocation = a.location;
if(a.location < 11){
    ui -> spinBox -> setValue(10 - a.location);
 }
 else if(playerLocation >= 11 && playerLocation < 21){
    ui -> spinBox -> setValue(10);
    ui -> spinBox_2 -> setValue(a.location - 11);
 }
 else if(playerLocation >= 21 && playerLocation < 31){
    ui -> spinBox -> setValue(10);
    ui -> spinBox_2 -> setValue(0);
    ui -> spinBox_3 -> setValue(a.location - 21);
 }
 else if(playerLocation > 31 && playerLocation <= 40){
    ui -> spinBox -> setValue(10);
    ui -> spinBox_2 -> setValue(0);
    ui -> spinBox_3 -> setValue(a.location - 21);
    ui -> spinBox_4 -> setValue(10 - (a.location - 30));
 }
QString movementDialogue = QString::number(a.movement);

space here = board[a.location - 1];
QString locationDialogue = QString::fromStdString(here.name);

QString moneyDialogue = "$" + QString::number(a.money);

QString netWorthDialogue = "$" + QString::number(a.netWorth);

ui ->label_l1_5 ->setText(movementDialogue);
ui ->label_l2_5 ->setText(locationDialogue);
ui ->label_l3_5 ->setText(moneyDialogue);
ui ->label_l3_31 ->setText(netWorthDialogue);
}


void gamescreen::playerTurn11(player& a){
a.turn();
int playerLocation = a.location;
if(a.location < 11){
    ui -> spinBox -> setValue(10 - a.location);
 }
 else if(playerLocation >= 11 && playerLocation < 21){
    ui -> spinBox -> setValue(10);
    ui -> spinBox_2 -> setValue(a.location - 11);
 }
 else if(playerLocation >= 21 && playerLocation < 31){
    ui -> spinBox -> setValue(10);
    ui -> spinBox_2 -> setValue(0);
    ui -> spinBox_3 -> setValue(a.location - 21);
 }
 else if(playerLocation > 31 && playerLocation <= 40){
    ui -> spinBox -> setValue(10);
    ui -> spinBox_2 -> setValue(0);
    ui -> spinBox_3 -> setValue(a.location - 21);
    ui -> spinBox_4 -> setValue(10 - (a.location - 30));
 }
QString movementDialogue = QString::number(a.movement);

space here = board[a.location - 1];
QString locationDialogue = QString::fromStdString(here.name);

QString moneyDialogue = "$" + QString::number(a.money);

ui ->label_l1_6 ->setText(movementDialogue);
ui ->label_l2_6 ->setText(locationDialogue);
ui ->label_l3_6 ->setText(moneyDialogue);
}


void gamescreen::playerTurn12(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_7 ->setText(movementDialogue);
    ui ->label_l2_7 ->setText(locationDialogue);
    ui ->label_l3_7 ->setText(moneyDialogue);

}

void gamescreen::playerTurn13(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_8 ->setText(movementDialogue);
    ui ->label_l2_8 ->setText(locationDialogue);
    ui ->label_l3_8 ->setText(moneyDialogue);
}

void gamescreen::playerTurn14(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_9 ->setText(movementDialogue);
    ui ->label_l2_9 ->setText(locationDialogue);
    ui ->label_l3_9 ->setText(moneyDialogue);
}

void gamescreen::playerTurn15(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    QString netWorthDialogue = "$" + QString::number(a.netWorth);

    ui ->label_l1_10 ->setText(movementDialogue);
    ui ->label_l2_10 ->setText(locationDialogue);
    ui ->label_l3_10 ->setText(moneyDialogue);
    ui -> label_l2_31 ->setText(netWorthDialogue);
}

void gamescreen::playerTurn16(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }

    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_11 ->setText(movementDialogue);
    ui ->label_l2_11 ->setText(locationDialogue);
    ui ->label_l3_11 ->setText(moneyDialogue);
}

void gamescreen::playerTurn17(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_12 ->setText(movementDialogue);
    ui ->label_l2_12 ->setText(locationDialogue);
    ui ->label_l3_12 ->setText(moneyDialogue);
}

void gamescreen::playerTurn18(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_13 ->setText(movementDialogue);
    ui ->label_l2_13 ->setText(locationDialogue);
    ui ->label_l3_13 ->setText(moneyDialogue);
}

void gamescreen::playerTurn19(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_14 ->setText(movementDialogue);
    ui ->label_l2_14 ->setText(locationDialogue);
    ui ->label_l3_14 ->setText(moneyDialogue);
}

void gamescreen::playerTurn20(player& a){
    a.turn();
    int playerLocation = a.location;
    if(a.location < 11){
        ui -> spinBox -> setValue(10 - a.location);
     }
     else if(playerLocation >= 11 && playerLocation < 21){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(a.location - 11);
     }
     else if(playerLocation >= 21 && playerLocation < 31){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
     }
     else if(playerLocation > 31 && playerLocation <= 40){
        ui -> spinBox -> setValue(10);
        ui -> spinBox_2 -> setValue(0);
        ui -> spinBox_3 -> setValue(a.location - 21);
        ui -> spinBox_4 -> setValue(10 - (a.location - 30));
     }
    QString movementDialogue = QString::number(a.movement);

    space here = board[a.location - 1];
    QString locationDialogue = QString::fromStdString(here.name);

    QString moneyDialogue = "$" + QString::number(a.money);

    ui ->label_l1_15 ->setText(movementDialogue);
    ui ->label_l2_15 ->setText(locationDialogue);
    ui ->label_l3_15 ->setText(moneyDialogue);

}




void gamescreen::player2Turn(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_12 -> setText(movement2Dialogue);
    ui ->label_10 -> setText(location2Dialogue);
    ui ->label_9 -> setText(money2Dialogue);
}

void gamescreen::player2Turn2(player& b){

    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_48 -> setText(movement2Dialogue);
    ui ->label_46 -> setText(location2Dialogue);
    ui ->label_45 -> setText(money2Dialogue);

}

void gamescreen::player2Turn3(player& b){

    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_64 -> setText(movement2Dialogue);
    ui ->label_65 -> setText(location2Dialogue);
    ui ->label_63 -> setText(money2Dialogue);

}


void gamescreen::player2Turn4(player& b){


    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_70 -> setText(movement2Dialogue);
    ui ->label_71 -> setText(location2Dialogue);
    ui ->label_69 -> setText(money2Dialogue);

}



void gamescreen::player2Turn5(player& b){

    b.turn2();
    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    QString netWorth2Dialogue = "$" + QString::number(b.netWorth);

    ui ->label_r1 -> setText(movement2Dialogue);
    ui ->label_r2 -> setText(location2Dialogue);
    ui ->label_r3 -> setText(money2Dialogue);
    ui -> label_r3_17 ->setText(netWorth2Dialogue);

}

void gamescreen::player2Turn6(player& b){
    b.turn2();
    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_2 -> setText(movement2Dialogue);
    ui ->label_r2_2 -> setText(location2Dialogue);
    ui ->label_r3_2 -> setText(money2Dialogue);
}

void gamescreen::player2Turn7(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_3 -> setText(movement2Dialogue);
    ui ->label_r2_3 -> setText(location2Dialogue);
    ui ->label_r3_3 -> setText(money2Dialogue);
}

void gamescreen::player2Turn8(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_4 -> setText(movement2Dialogue);
    ui ->label_r2_4 -> setText(location2Dialogue);
    ui ->label_r3_4 -> setText(money2Dialogue);
}

void gamescreen::player2Turn9(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_5 -> setText(movement2Dialogue);
    ui ->label_r2_5 -> setText(location2Dialogue);
    ui ->label_r3_5 -> setText(money2Dialogue);
}

void gamescreen::player2Turn10(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    QString netWorth2Dialogue = "$" + QString::number(b.netWorth);
    ui ->label_r1_6 -> setText(movement2Dialogue);
    ui ->label_r2_6 -> setText(location2Dialogue);
    ui ->label_r3_6 -> setText(money2Dialogue);
    ui -> label_r3_18 -> setText(netWorth2Dialogue);
}

void gamescreen::player2Turn11(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_7 -> setText(movement2Dialogue);
    ui ->label_r2_7 -> setText(location2Dialogue);
    ui ->label_r3_7 -> setText(money2Dialogue);
}

void gamescreen::player2Turn12(player& b){
    b.turn2();


    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_8 -> setText(movement2Dialogue);
    ui ->label_r2_8 -> setText(location2Dialogue);
    ui ->label_r3_8 -> setText(money2Dialogue);
}

void gamescreen::player2Turn13(player& b){
    b.turn2();


    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_9 -> setText(movement2Dialogue);
    ui ->label_r2_9 -> setText(location2Dialogue);
    ui ->label_r3_9 -> setText(money2Dialogue);
}

void gamescreen::player2Turn14(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_10 -> setText(movement2Dialogue);
    ui ->label_r2_10-> setText(location2Dialogue);
    ui ->label_r3_10 -> setText(money2Dialogue);
}

void gamescreen::player2Turn15(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_11 -> setText(movement2Dialogue);
    ui ->label_r2_11-> setText(location2Dialogue);
    ui ->label_r3_11 -> setText(money2Dialogue);
}

void gamescreen::player2Turn16(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_12 -> setText(movement2Dialogue);
    ui ->label_r2_12-> setText(location2Dialogue);
    ui ->label_r3_12 -> setText(money2Dialogue);
}

void gamescreen::player2Turn17(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_13 -> setText(movement2Dialogue);
    ui ->label_r2_13-> setText(location2Dialogue);
    ui ->label_r3_13 -> setText(money2Dialogue);
}

void gamescreen::player2Turn18(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_14 -> setText(movement2Dialogue);
    ui ->label_r2_14-> setText(location2Dialogue);
    ui ->label_r3_14 -> setText(money2Dialogue);
}

void gamescreen::player2Turn19(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_15 -> setText(movement2Dialogue);
    ui ->label_r2_15-> setText(location2Dialogue);
    ui ->label_r3_15 -> setText(money2Dialogue);
}

void gamescreen::player2Turn20(player& b){
    b.turn2();

    QString movement2Dialogue = QString::number(b.movement);

    space here2 = board[b.location - 1];
    QString location2Dialogue = QString::fromStdString(here2.name);

    QString money2Dialogue = "$" + QString::number(b.money);

    ui ->label_r1_16 -> setText(movement2Dialogue);
    ui ->label_r2_16-> setText(location2Dialogue);
    ui ->label_r3_16 -> setText(money2Dialogue);
}

gamescreen::~gamescreen()
{
    delete ui;

}

void gamescreen::getWinner(player a, player b){
    QFont f( "Arial", 30, QFont::Bold);



    if(a.netWorth > b.netWorth){
        QString winr = "The winner, by higher net worth, is Player 1!";
        ui -> winnerlabel ->setText(winr);
        ui -> winnerlabel ->setFont(f);
    }
    if(b.netWorth > a.netWorth){
        QString winr = "The winner, by higher net worth, is Player 2!";
        ui -> winnerlabel ->setText(winr);
        ui -> winnerlabel ->setFont(f);
    }

}

void gamescreen::announceWinner(player a, player b){
    QFont f( "Arial", 30, QFont::Bold);


    if(a.netWorth > b.netWorth){
        QString winr = "The winner, by opposition bankruptcy, is Player 1!";
        ui -> winnerlabel ->setText(winr);
        ui -> winnerlabel ->setFont(f);
    }
    else{
        QString winr = "The winner, by opposition bankruptcy, is Player 2!";
        ui -> winnerlabel ->setText(winr);
        ui -> winnerlabel ->setFont(f);
    }

}
