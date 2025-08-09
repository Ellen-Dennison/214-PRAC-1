#ifndef PNGEXPORTER_H
#define PNGEXPORTER_H
#include "ExportCanvas.h"

class PNGExporter:public ExportCanvas
{ 
    private:
    virtual void prepareCanvas();
    virtual void renderElements();
    virtual void saveToFile();
};
#endif 