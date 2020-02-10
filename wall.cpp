#include "wall.h"
Wall::Wall(QWidget *parent)
    : QWidget(parent){

}

void Wall:: paintEvent(QPaintEvent* e){
    QPainter painter(this);
    painter.setBrush(QBrush(Qt::white));
    QRectF pff(0,0,20,10);
    painter.drawRect(pff);
    return;
}
