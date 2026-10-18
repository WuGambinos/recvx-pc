#include "ps2/veronica/prog/padman.h"

int CheckSoftResetKeyFlag(int ControllerId) { return 0; }
void ClearSoftResetKeyFlag(int ControllerId) {}

PAD_WRK Pad[4] = {-1, -1, -1, -1};
int SoftResetFlag = -1;
int CurrentPortId = -1;

PAD_WRK Pad[4];
int SoftResetFlag;
int CurrentPortId;
