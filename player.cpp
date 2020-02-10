#include "player.h"
Player::Player(QWidget *parent)
    : QWidget(parent){

}

void Player:: paintEvent(QPaintEvent* e){

    QPainter painter(this);
    painter.setBrush(QBrush(Qt::yellow));
    QRectF pff(0,0,10,10);
    painter.drawEllipse(pff);
    return;
}
