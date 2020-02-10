#ifndef PLAYER_H
#define PLAYER_H
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QMainWindow>
#include <QPainter>
class Player:public QWidget{
public:

    Player(QWidget *parent= nullptr);
    void paintEvent(QPaintEvent* e);
private:
public slots:
    void move_right();
    void move_left();
    void move_up();
    void move_down();


};
#endif // PLAYER_H

