#include "ballanimation.h"
#include <QDebug>
#include<QPaintEvent>
#include <QPainter>

BallAnimation::BallAnimation(QWidget *parent) :
    QWidget(parent),
    m_origin(QPoint(50,50))
{
    setGeometry(0,0,100,100);
}

void BallAnimation::setOrigin(const QPoint &origin)
{
    m_origin = origin;
}

void BallAnimation::addToOrigin(const QPoint &point)
{
    m_origin += point;
}

void BallAnimation::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawRect(QRect(0,0,width()-1,height()-1));
    painter.setBrush(Qt::blue);
    painter.setPen(Qt::red);
    painter.drawEllipse(m_origin, 25, 25);
}
