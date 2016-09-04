#ifndef MYITEM_H
#define MYITEM_H

#include <QtQuick/QQuickPaintedItem>

class MyItem : public QQuickPaintedItem
{
    Q_OBJECT
    Q_DISABLE_COPY(MyItem)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)

public:
    MyItem(QQuickItem *parent = 0);
    ~MyItem();

    void paint(QPainter *painter);

    QColor color()const;
    void setColor(QColor color);

signals:
    void colorChanged();

private:
    QColor m_color;
};

#endif // MYITEM_H
