#include "ballanimation.h"
#include <QDebug>
#include<QPaintEvent>
#include <QPainter>

BallAnimation::BallAnimation(QWidget *parent) :
    QWidget(parent),
    m_origin(QPoint(50,50))
{
    setGeometry(0,0,edgew=200,edgeh=200);
}

void BallAnimation::setOrigin(const QPoint &origin)
{
    m_origin = origin;
}


void BallAnimation::addToOrigin(const QPoint &point)
{
    if(minx = true)
    {
        QPoint test(1,1);
        m_origin += test;
    }
    else{
        m_origin += point;
    }
}



void BallAnimation::check()
{
    if(m_origin.x()+25 >199)
    {
        minx = false;
    }
    else if(m_origin.x()-25 <1 )
    {
        minx = true;
    }
}

void BallAnimation::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.drawRect(QRect(0,0,width(),height()));
    painter.setBrush(Qt::blue);
    painter.setPen(Qt::red);
    painter.drawEllipse(m_origin, 25, 25); //(?,?, width, height) For reference, it uses 'void QPainter::drawEllipse(int x, int y, int width, int height)'

}
