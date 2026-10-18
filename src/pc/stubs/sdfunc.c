#include "stubs.h"

#include "rxi/log.h"
int CheckTransEndSoundBank() { return 0; }
void ExitApplication() { njUserExit(); }
void InitSofdecSystem(int Mode) {}
void ExitSofdecSystem() {}
void InitSoundProgram() {}
void ExitSoundProgram() {}
void StartVibrationEx(int AtrbId, int VibNo) {}
void StopVibrationBasic(int PortNo) {}
void StopVibrationEx() {}
void PlayBgmEx2(unsigned int PatId, int BgmNo, int FadeInRate, int Volume) {}
void PlayVoiceEx2(int PatId, int VoiceNo, NJS_POINT3 *pPos, int Mode,
                  int FadeInRate, int PauseFlag) {}
void bhReleaseFreeMemory(void *mp) {}
void CallSystemSeBasic(int SeNo, int Volume, int FxLevel) {}
void CallSystemSe(int param,
                  int SeNo) // first parameter is not present on the DWARF
{}
void RequestAdjustDisplay(int AdjustX, int AdjustY) {}
void RequestAllStopSoundEx(int AdxFlag, int InSoundFlag, int FadeCount) {}
int GetInsideFileSize(unsigned int PartitionId, unsigned int FileId) {
  return 0;
}
int GetReadFileStatus() { return 0; }
int RequestReadInsideFile(unsigned int PartitionId, unsigned int FileId,
                          void *DestPtr) {
  return 0;
}
int MountSoundAfs() { return 0; }
void UnmountSoundAfs() {}

void SetAdjustDisplay() {}
void SetEventVibrationMode(int Mode) {}
int WaitPrePlayMovie() { return 0; }
void InitFirstSofdec() {}
void AllStopEnemySe(void) { log_info("AllStopEnemySe"); };

int PatId[4] = {-1, -1, -1, -1};
