#include "target.h"
Target::Target(QWidget *parent)
    : QWidget(parent){

}

void Target:: paintEvent(QPaintEvent* e){
    QPainter painter(this);
    painter.setBrush(QBrush(Qt::darkMagenta));
    QRectF pff(0,0,8,8);
    painter.drawEllipse(pff);
    return;
}
