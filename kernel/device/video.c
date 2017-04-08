#include "../include/device/video.h"
#include "../include/device/video_mode.h"
#include "../include/string.h"
#include "../include/logo.h"
uint8_t *vmem;

void init_vmem_addr()
{
	struct ModeInfoBlock *MIB = (struct ModeInfoBlock*)(0x7e00);
	vmem = (uint8_t *) MIB->physbase;
}

inline void init_vmem()
{
	memcpy(vmem, gImage_PARK, SCR_SIZE);
}



























