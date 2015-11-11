#ifndef COLORPICKER_H
#define COLORPICKER_H

#include <QColor>
#include <QColorDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPalette>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class ColorPicker : public QWidget
{
    Q_OBJECT
    QPushButton fgButton;
    QPushButton bgButton;

    QIcon fgBackground;
    QIcon bgBackground;

    QColor fgColor;
    QColor bgColor;
    QVBoxLayout layout;
    QPalette pal;
public:
    explicit ColorPicker(QWidget *parent = 0);
    ~ColorPicker();
    QColor getForegroundColor();
    QColor getBackgroundColor();
    void updateColors();

signals:
    void colorChanged(QColor fgColor, QColor bgColor);

public slots:
    void changeForegroundColor();
};

#endif // COLORPICKER_H
