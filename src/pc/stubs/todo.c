
#include "types.h"

#include "ps2/veronica/prog/adv.h"
#include "ps2/veronica/prog/main.h"
#include "ps2/veronica/prog/ps2_SystemLoadScreen.h"
#include "ps2/veronica/prog/ps2_SystemSaveScreen.h"

#include "rxi/log.h"

// ps2_NaView
void njSetAspect(Float ax, Float ay) {}
void njInitView(NJS_VIEW *v) {}
void njSetView(NJS_VIEW *v) {}
void njClipZ(Float n, Float f) {}

// ps2_NaSystem
void njSetVertexBuffer(Uint32 *buffer, Sint32 size) {}
void njInitVertexBuffer(Sint32 op, Sint32 om, Sint32 tp, Sint32 tm, Sint32 pt) {
}
void njSetBackColor(Uint32 col1, Uint32 col2, Uint32 col3) {}
void njTextureFilterMode(Int mode) {}
void njPolygonCullingMode(Int mode) {}
void njTextureShadingMode(Int mode) {}
void njSetBorderColor(Uint32 color) {}
void njWaitVSync(void) {}

// ps2_NinjaCnk
void njInit3D(NJS_VERTEX_BUF *vbuf, Int vn) {}

// ps2_MemoryCard.c
MEMORYCARDSTATE *CreateMemoryCard(MEMORYCARDSTATE *pCard) { return NULL; }
int CreateMemoryCardSubDirectory(MEMORYCARDSTATE *pCard) { return 0; }
int CheckMcSelectPortInfoState(unsigned int ulPort) { return 0; }
int GetMcSelectPortType(MEMORYCARDSTATE *pCard, unsigned int ulPort) {
  return 0;
}

// ps2_SystemLoadScreen.c
SYSLOAD_SCREEN *CreateSysLoadScreen(SYSLOAD_SCREEN *pSysLoad,
                                    void *vpWorkPtrSys) {
  return NULL;
}
int ExecuteSysLoadScreen(SYSLOAD_SCREEN *pSysLoad) { return 0; }

// ps2_SystemSaveScreen.c
int ExecuteSysSaveScreen(SYSSAVE_SCREEN *pSysSave) { return 0; }
SYSSAVE_SCREEN *CreateSysSaveScreen(SYSSAVE_SCREEN *pSysSave,
                                    void *vpWorkPtrSys,
                                    unsigned short usSaveMesMode,
                                    unsigned short usSaveWriteMode) {
  return NULL;
}

// ps2_dummy
int Ps2CheckTextureAlpha(void *pp) { return 0; }
void PS2_jikken() {}
void Ps2ClearOT();
unsigned int palbuf[4096] = {};
NJS_MATRIX crmat = {};
extern float mbuf[128][16] = {};
unsigned int Ps2_sys_cnt = 0;

// ps2_sg_malloc
void syFree(void *ap) {}
void *syMalloc(unsigned int nbytes) { return NULL; }

// ps2_sg_pd
void pdSetMode(Sint32 mode) {}

// ps2_sg_sybt
Void syBtExit(Void) {}

// ps2_sg_sycbl
SYE_CBL syCblCheck(void) {}

// ps2_sg_sycfg
Sint32 syCfgSetSoundMode(Sint32 nMode) { return 0; }

// ps2_pxlconv
unsigned char *Ps2_PXLCONV = {};
// unsigned char* Ps2_PXLCONV __attribute__((aligned(64)));

// ps2_texture.c
void bhCopyMainmem2Texmem(NJS_TEXLIST *tlp) {}
char *bhCopyTexmem2MainmemSub(NJS_TEXLIST *tlp, char *adr) { return NULL; }
void bhGarbageTexture(NJS_TEXMEMLIST *addr, unsigned int n) {}

// sbinit
void sbInitSystem(Int mode, Int frame, Int count) {}
void sbExitSystem(void) {}

// screen
void bhSetScreenFade(unsigned int argb, float ct) {}
void bhDrawScreenFade() {}

// sub1
void AllItemInit() { log_info("AllItemInit"); }

// system.h
int bhCalcVtxBuffer() {}
void bhChangeHWSetting() {}
void bhInitSystem() {}
void bhInitRoomChangeSystem() {}

void bhSysCallInit() {
  log_info("Inside bhSysCallInit");
  bhInitSystem();

  sys->tk_flg = 0x300002;
}

void bhSysCallWarning() {
  log_info("Inside bhSysCallWarning");
  njFogDisable();

  njSetBackColor(0x00000000, 0x00000000, 0x00000000);

  if (Adv_FirstWarningMessage() != 0) {
    sys->tk_flg = 0x300004;
  }
}

void bhSysCallIpl() { log_info("Inside bhSysCallIpl"); }
void bhSysCallFirstmovie() { log_info("Inside bhSysCallFirstmovie"); }
void bhSysCallTitle() { log_info("Inside bhSysCallTitle"); }
void bhSysCallOpening() { log_info("Inside bhSysCallOpening"); }
void bhSysCallPad() { log_info("Inside bhSysCallPad"); }
void bhSysCallGame() { log_info("Inside bhSysCallGame"); }
void bhSysCallEvent() { log_info("Inside bhSysCallEvent"); }
void bhSysCallItemselect() { log_info("Inside bhSysCallItemselect"); }
void bhSysCallMap() { log_info("Inside bhSysCallMap"); }
void bhSysCallDoordemo() { log_info("Inside bhSysCallDoordemo"); }
void bhSysCallMovie() { log_info("Inside bhSysCallMovie"); }
void bhSysCallEnding() { log_info("Inside bhSysCallEnding"); }
void bhSysCallGameover() { log_info("Inside bhSysCallGameover"); }
void bhSysCallTypewriter() { log_info("Inside bhSysCallTypewriter"); }
void bhSysCallOption() { log_info("Inside bhSysCallOption"); }
void bhSysCallCompEvent() { log_info("Inside bhSysCallCompEvent"); }
void bhSysCallDiscChange() { log_info("Inside bhSysCallDiscChange"); }
void bhSysCallSoundMuseum() { log_info("Inside bhSysCallSoundMuseum"); }
void bhSysCallMonitor() { log_info("Inside bhSysCallMonitor"); }
void bhSysCallSndMonitor() { log_info("Inside bhSysCallSndMonitor"); }
void bhSysCallScreenSaver() { log_info("Inside bhSysCallScreenSaver"); }

void bhFirstGameStart() {}
void bhCheckSubTask() {}
void bhReturnTitle() {}
void bhExitGame() {}
void bhSetEventTimer(int mode) {}
void EasyDispMessage(float PosY, unsigned int MessageNo) {}
