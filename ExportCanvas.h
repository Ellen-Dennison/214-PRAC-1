#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include "Canvas.h"

class ExportCanvas:public Canvas
{
    private:
    Canvas* canvas;
    virtual void prepareCanvas();
    virtual void renderElements();
    virtual void saveToFile() = 0;

    public:
    void exportToFile();
    ~ExportCanvas();
};
#endif
