#ifndef PNGEXPORTER_H
#define PNGEXPORTER_H
#include "ExportCanvas.h"

class PNGExporter:public ExportCanvas
{ 
    private:
    virtual void saveToFile();
};
#endif 