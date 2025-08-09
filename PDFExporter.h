#ifndef PDFEXPORTER_H
#define PDFEXPORTER_H
#include "ExportCanvas.h"

class PDFExporter : public ExportCanvas
{   
    private:
    virtual void prepareCanvas();
    virtual void renderElements();
    virtual void saveToFile();
};
#endif