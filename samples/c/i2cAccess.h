#pragma once

#include <wiringPiI2C.h>

#define ADDRESS_TDS1 99
#define ADDRESS_TDS2 100

static const char commandInfo[5] = "I,?\r";

bool initCommunications( void );
void sendCommand( char* command );
float getTdsValue ( char number );
