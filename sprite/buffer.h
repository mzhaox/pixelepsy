#ifndef BUFFER_H
#define BUFFER_H

#include "sprite/sprite.h"
#include "tools/tool.h"

#include <deque>
#include <functional>
#include <memory>
#include <vector>

#include <QObject>
#include <QPoint>
#include <QImage>

class Buffer : QObject
{
    Q_OBJECT


private:

    std::deque<std::shared_ptr<Sprite>> history;
    std::deque<std::shared_ptr<Sprite>> future;

    Tool::Operation operation;
public:
    Buffer() = delete;

    Buffer(int width, int height);

    QImage get(int frame, int layer);
    std::shared_ptr<Sprite> current();

    QString toString();
    void applyOperation(int frame, int layer, std::vector<QPoint> &points);

signals:
    void spriteModified();
};

#endif // BUFFER_H
