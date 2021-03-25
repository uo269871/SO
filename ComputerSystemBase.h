#ifndef COMPUTERSYSTEMBASE_H
#define COMPUTERSYSTEMBASE_H

#include "ComputerSystem.h"

// Functions prototypes
int ComputerSystem_ObtainProgramList(int , char *[], int);
void ComputerSystem_DebugMessage(int, char , ...);
void ComputerSystem_ShowTime(char);

// This "extern" declarations enables other source code files to gain access to the variables 
extern char defaultDebugLevel[];
extern int intervalBetweenInterrupts;

#define DEFAULT_INTERVAL_BETWEEN_INTERRUPTS 5

#endif
