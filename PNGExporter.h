#ifndef PNGEXPORTER_H
#define PNGEXPORTER_H
#include "ExportCanvas.h"

class PNGExporter:public ExportCanvas
{ 
  private:
  void saveTofile();
};
#endif 