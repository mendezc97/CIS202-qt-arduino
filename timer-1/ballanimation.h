#ifndef BALLANIMATION_H
#define BALLANIMATION_H

#include <QWidget>

class BallAnimation : public QWidget
{
    Q_OBJECT
public:
    explicit BallAnimation(QWidget *parent = nullptr);
    void setOrigin(const QPoint &origin);
    void addToOrigin(const QPoint &point);
    void check();


signals:

public slots:
    void paintEvent(QPaintEvent* event);

private:
        QPoint m_origin;
        int circlew;
        int circleh;
        int edgew;
        int edgeh;
        bool minx = true;


};

#endif // BALLANIMATION_H
