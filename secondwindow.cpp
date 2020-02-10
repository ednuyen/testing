#include "secondwindow.h"
#include "player.h"
#include "wall.h"
#include "target.h"
#include <QGridLayout>
//Makes the second window which will be able to recieve the signal from MainWindow
SecondWindow::SecondWindow(QWidget *parent) : QWidget(parent) {
    QPixmap bkgnd(":/pics/background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd); // do not want tiles
    this->setPalette(palette);
    fullwindow = new QVBoxLayout();
    title_space = new QHBoxLayout();
    play_space = new QGridLayout();

    //player_health
    text1 = new QLabel("Welcome to Heck's Kitchen!");
    health_text= new QLabel("Health: "+ QString::number(health) );
    Player* main_character = new Player;

    draw_walls();
    draw_targets();
    title_space->addWidget(text1);
    title_space->addWidget(health_text);
    play_space->addWidget(main_character, 5,5);

    fullwindow->addLayout(title_space);
    fullwindow->addLayout(play_space);
    setLayout(fullwindow);
}

void SecondWindow:: draw_walls(){
    for (int i= 0; i<11; i++){
        Wall* a= new Wall;
        play_space->addWidget(a,i,0);
    }
    for (int i= 0; i<11; i++){
        Wall* a= new Wall;
        play_space->addWidget(a,i,10);
    }
    for (int i= 0; i<10; i++){
        Wall* a= new Wall;
        play_space->addWidget(a,0,i);
    }
    for (int i= 0; i<10; i++){
        Wall* a= new Wall;
        play_space->addWidget(a,10,i);
    }
}

void SecondWindow:: draw_targets(){
    for (int i =1; i<10; i++){
        Target* a= new Target;
        play_space->addWidget(a,i, 2);
    }
}

SecondWindow::~SecondWindow()
{

}
