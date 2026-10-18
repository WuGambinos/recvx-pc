#include "rxi/log.h"

void bhControlMessage(int mode) { log_info("Inside bhControlMessage"); }
void bhFontScaleSet(float ScaleX, float ScaleY, float ScaleCR) {
  log_info("Inside bhFontScaleSet");
}

int bhDispMessage(float px, float py, float pri, int mes_typ, int mes_idx,
                  int color, int count) {}

float FontScaleX = 0;
float FontScaleCR = 0;
const unsigned char FontSz[126] = {};
