#include <Arduino.h>
#include "debug.h"

enclosedDbger::enclosedDbger(const char* startMessage)
{
	startTime = micros();
	DBG_println(startMessage);
}

enclosedDbger::~enclosedDbger()
{
}

void enclosedDbger::close(const char* stopMessage)
{
	DBG_print("Done after "); 
	DBG_print(micros() - startTime); 
	
	if(stopMessage == 0)
	{
		DBG_println(" us.");
	}
	else
	{
		DBG_print(" us. "); DBG_println(stopMessage);
	}
}