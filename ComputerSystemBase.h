#ifndef COMPUTERSYSTEMBASE_H
#define COMPUTERSYSTEMBASE_H

#include "ComputerSystem.h"

// Functions prototypes
int ComputerSystem_ObtainProgramList(int , char *[], int);
void ComputerSystem_DebugMessage(int, char , ...);

// This "extern" declarations enables other source code files to gain access to the variables 
extern char defaultDebugLevel[];

#endif
