#include "mainwindow.h"
#include "secondwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
//    this->setFixedSize(this->geometry().width(),this->geometry().height());
    this->setFixedSize(700,700);
    QPixmap bkgnd(":/pics/Welcome.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd); // do not want tiles
    this->setPalette(palette);

    layout = new QVBoxLayout();
    mainscreen = new QGridLayout();
    buttons = new QHBoxLayout();
    QVBoxLayout* spacer = new QVBoxLayout();
    QVBoxLayout* spacer2 = new QVBoxLayout();

    blank = new QLabel(" \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    spacer->addWidget(blank);
    QLabel* blank2 = new QLabel("\n\n\n\n\n\n\n\n");
    spacer2->addWidget(blank2); // need to figure out spacing, but this somewhat puts where we want the slider to be

    challenge = new QSlider();
    challenge->setRange(1,3); // choose difficulty of game
    start = new QPushButton("PLAY");
    start->setStyleSheet("QPushButton { background-color : white; color : black; }");
    leave = new QPushButton(" EXIT");
    leave->setStyleSheet("QPushButton { background-color : white; color : black; }");
    connect(start,&QPushButton::pressed, this, &MainWindow::buttonpressed);
    connect(leave,&QPushButton::pressed, this, &MainWindow::buttonclose);

    layout->addWidget(challenge);
    buttons->addWidget(leave);
    buttons->addWidget(start);
    mainscreen->addLayout(spacer,0,0);
    mainscreen->addLayout(layout,1,0);
    mainscreen->addLayout(spacer2,2,0);
    mainscreen->addLayout(buttons,3,0,1,2);

    QWidget* central = new QWidget();
    central->setLayout(mainscreen);
    this->setCentralWidget(central);
}

MainWindow::~MainWindow(){}

void MainWindow::buttonpressed(){
    w2.show();
}

void MainWindow::buttonclose(){
    MainWindow::close();
    w2.close();
}

