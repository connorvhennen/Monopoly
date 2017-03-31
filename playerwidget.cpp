#include "playerwidget.h"
#include "ui_playerwidget.h"

playerwidget::playerwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::playerwidget)
{
    ui->setupUi(this);
}

playerwidget::~playerwidget()
{
    delete ui;
}

