#include <stdio.h>
#include <string.h>
#include "i2cAccess.h"

char initCommunications(){
	char success = 0;
	if( wiringPiI2CSetup (ADDRESS_TDS1)== -1 )
	{
		success = 1;
	}
	return success;
}

void sendCommand( char* command ){
	int lenght = strlen(command);
	while(lenght--)
	{

	}
}
float getTdsValue ( char number ){
	float ret_value = 1.4;
	return ret_value;
}
