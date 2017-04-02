#include <map>
#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "player.h"


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

//    QLabel gameTitle("UCmonopoLA");
//    gameTitle.setFixedHeight(100);
//    gameTitle.setFixedWidth(100);
//    QString title = "UCmonopoLA";
//    gameTitle.setText("UCmonopoLA");
//    gameTitle.setAlignment(Qt::AlignCenter);
//    gameTitle.show();

    //centerAndResize();
//    QPixmap zbt(":/boardpix/UCLA_tennis_courts.jpg");
//    ui -> label1 -> setPixmap(zbt);


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

//    ui -> verticalSlider_2->show();
//    ui -> verticalSlider_6->show();
//    ui -> horizontalSlider_4->show();
//    ui -> horizontalSlider_5->show();
//    ui -> verticalSlider_3->show();
//    ui -> verticalSlider_8->show();
//    ui -> horizontalSlider_3->show();
//    ui -> horizontalSlider_8->show();

    if(this -> playerCount < 3){
        ui -> verticalSlider_2->hide();
        ui -> verticalSlider_6->hide();
        ui -> horizontalSlider_4->hide();
        ui -> horizontalSlider_5->hide();
        ui -> verticalSlider_3->hide();
        ui -> verticalSlider_8->hide();
        ui -> horizontalSlider_3->hide();
        ui -> horizontalSlider_8->hide();
    }
    else if(this -> playerCount < 4){
        ui -> verticalSlider_2->hide();
        ui -> verticalSlider_6->hide();
        ui -> horizontalSlider_4->hide();
        ui -> horizontalSlider_5->hide();
    }


//    std::map<int, player*>::iterator itBegin;

//    itBegin = playerMap.begin();

    //player p1 = *itBegin -> second;

    //playerTurn(p1);

}

//QRect  gamescreen::getFrameGeometry(const QLabel* a) const{
//    return a->geometry();
//}



//QRect space1 = getFrameGeometry(gamescreen::ui -> label1);


//    QImage bruinwalk(":/boardpix/bruinwalk.jpg");
//    QImage bruinwalk2 = bruinwalk.scaled(80, 100, Qt::KeepAspectRatio);
//    ui -> person ->setScaledContents(true);
//    ui -> person  ->setPixmap(QPixmap::fromImage(bruinwalk2));


//}

void gamescreen::playerTurn(player& a){
    a.turn();
    int playerLocation = a.get_location();
    if(playerLocation <= 11){
        ui -> horizontalSlider -> setValue(11 - playerLocation);
    }
    else if(playerLocation > 11 && playerLocation <= 21){
         ui -> horizontalSlider -> setValue(0);
        ui -> verticalSlider -> setValue(playerLocation - 11);
    }
    else if(playerLocation > 21 && playerLocation <= 31){
        ui -> horizontalSlider -> setValue(10);
        ui -> verticalSlider -> setValue(0);
        ui -> horizontalSlider_7 -> setValue(playerLocation - 21);
    }
    else if(playerLocation > 31 && playerLocation <= 40){
        ui -> horizontalSlider -> setValue(0);
        ui -> verticalSlider -> setValue(0);
        ui -> horizontalSlider_7 -> setValue(0);
        ui -> verticalSlider_5 -> setValue(playerLocation - 30);
    }
}

/* Destrctor for RulesWindow class object */
gamescreen::~gamescreen()
{
    delete ui;
}

//void gamescreen::centerAndResize() {
//    // get the dimension available on this screen
//    QSize availableSize = qApp->desktop()->availableGeometry().size();
//    int width = availableSize.width();
//    int height = availableSize.height();
//    qDebug() << "Available dimensions " << width << "x" << height;
//    width = 0.9; // 90% of the screen size
//    height = 0.9; // 90% of the screen size
//    qDebug() << "Computed dimensions " << width << "x" << height;
//    QSize newSize( width, height );

//    setGeometry(
//        QStyle::alignedRect(
//            Qt::LeftToRight,
//            Qt::AlignCenter,
//            newSize,
//            qApp->desktop()->availableGeometry()
//        )
//    );

