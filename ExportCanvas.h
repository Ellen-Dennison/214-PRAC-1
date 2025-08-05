#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include "Canvas.h"

class ExportCanvas{
    Canvas* canvas;

    void prepareCanvas();
    void renderElements();
    virtual void saveToFile() = 0;

    public:
    void export();
};
#endif
