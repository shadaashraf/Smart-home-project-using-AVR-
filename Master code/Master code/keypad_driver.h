
#ifndef KEYPAD_DRIVER_H_
#define KEYPAD_DRIVER_H_
#define NOT_PRESSED 0xff
#include "DIO.h"


void keypad_vInit(void);


uint8 keypad_u8check_press(void);

#endif