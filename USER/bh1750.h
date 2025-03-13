#ifndef BH1750_H
#define BH1750_H

#include "stm32f10x.h"

#define BH1750_ADDRESS  0x23  // Ðia chi mac dinh khi ADDR noi GND

void BH1750_Init(void);
void BH1750_StartMeasurement(void);
uint16_t BH1750_ReadLight(void);

#endif
