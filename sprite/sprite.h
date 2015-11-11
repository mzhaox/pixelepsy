#ifndef SPRITE_H
#define SPRITE_H

#include "sprite/frame.h"

#include <QImage>

#include <vector>

class Sprite
{
    int width;
    int height;

    std::vector<Frame> frames;
public:
    Sprite() = delete;
    Sprite(int width, int height);
    Frame getFrame(int frame);
    QImage getImage(int frame, int layer);
};

#endif // SPRITE_H
