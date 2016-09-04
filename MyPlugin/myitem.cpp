#include "myitem.h"
#include <QColor>


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
