#include "types.h"

void njInitTextureBuffer(Sint8 *addr, Uint32 size) {}
void njInitTexture(NJS_TEXMEMLIST *addr, Uint32 n) {}
void njExitTexture(void) {}
Sint32 njLoadTexture(NJS_TEXLIST *texlist) { return 0; }
Sint32 njSetTexture(NJS_TEXLIST *texlist) { return 0; }
void njSetPaletteMode(Uint32 mode) {}
Uint32 njGetPaletteMode(void) { return 0; }
void njSetPaletteData(Sint32 offset, Sint32 count, void *data) {}
void njReleaseTextureAll(void) {}
Sint32 njReleaseTexture(NJS_TEXLIST *texlist) { return 0; }
Sint32 njSetTextureNum(Uint32 n) { return 0; }
void njSetTextureInfo(NJS_TEXINFO *info, Uint16 *tex, Sint32 Type,
                      Sint32 nWidth, Sint32 nHeight) {}
void njSetTextureName(NJS_TEXNAME *texname, void *addr, Uint32 globalIndex,
                      Uint32 attr) {}

NJS_TEXMEMLIST *Ps2_current_texmemlist = {};
