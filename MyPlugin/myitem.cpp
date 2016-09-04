#include "myitem.h"
#include <QColor>
#include <QPainter>


MyItem::MyItem(QQuickItem *parent):
    QQuickPaintedItem(parent)
{
    // By default, QQuickItem does not draw anything. If you subclass
    // QQuickItem to create a visual item, you will need to uncomment the
    // following line and re-implement updatePaintNode()

    // setFlag(ItemHasContents, true);
}

MyItem::~MyItem()
{

}

void MyItem::paint(QPainter *painter)
{
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawEllipse(QRect(0,0,300,300));
    painter->drawArc(50,50,100,100,30 * 16,120 * 16);
    painter->drawArc(150,50,100,100,30 * 16,120 * 16);

    painter->drawArc(100,170,100,80,-0,-2880);
}

QColor MyItem::color()const
{
    return m_color;
}

void MyItem::setColor(QColor color)
{
    if(m_color != color)
        m_color = color;
}
