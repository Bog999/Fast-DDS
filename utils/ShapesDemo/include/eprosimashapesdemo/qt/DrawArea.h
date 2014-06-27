/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima RTPS is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QBrush>
#include <QPen>
#include <QWidget>
#include "eprosimashapesdemo/shapesdemo/figure.h"

#define SD_QT_COLOR_TRANS 255
const QColor SD_QT_PURPLE = QColor(255,0,255,SD_QT_COLOR_TRANS);
const QColor SD_QT_BLUE = QColor(0,0,255,SD_QT_COLOR_TRANS);
const QColor SD_QT_RED = QColor(255,0,0,SD_QT_COLOR_TRANS);
const QColor SD_QT_GREEN = QColor(0,255,0,SD_QT_COLOR_TRANS);
const QColor SD_QT_YELLOW = QColor(255,255,0,SD_QT_COLOR_TRANS);
const QColor SD_QT_CYAN = QColor(0,176,246,SD_QT_COLOR_TRANS);
const QColor SD_QT_MAGENTA = QColor(245,0,135,SD_QT_COLOR_TRANS);
const QColor SD_QT_ORANGE = QColor(255,130,0,SD_QT_COLOR_TRANS);

const QColor SD_QT_BLACK = QColor(0,0,0,255);

class QPainter;

class DrawArea: public QWidget
{
    Q_OBJECT

public:
    DrawArea(QWidget* parent=0);
    virtual ~DrawArea();

    QSize minimumSizeHint() const;
    QSize sizeHint() const;

public slots:
    void setPen(const QPen &pen);
    void setBrush(const QBrush &brush);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QPen m_pen;
    QBrush m_brush;
    ShapeType m_shape;
    QColor getColorFromShapeType(ShapeType& st);
    void paintShape(QPainter* painter,ShapeType& sh);

};


#endif // DRAWAREA_H
