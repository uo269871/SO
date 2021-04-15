#ifndef COMPUTERSYSTEMBASE_H
#define COMPUTERSYSTEMBASE_H

#include "ComputerSystem.h"
#include "Heap.h"

// Functions prototypes
int ComputerSystem_ObtainProgramList(int , char *[], int);
void ComputerSystem_DebugMessage(int, char , ...);
void ComputerSystem_ShowTime(char);
void ComputerSystem_FillInArrivalTimeQueue();
void ComputerSystem_PrintArrivalTimeQueue();

// This "extern" declarations enables other source code files to gain access to the variables 
extern char defaultDebugLevel[];
extern int intervalBetweenInterrupts;

extern int endSimulationTime; // For end simulation forced by time

#ifdef ARRIVALQUEUE
extern int numberOfProgramsInArrivalTimeQueue;
extern heapItem arrivalTimeQueue[];
#endif

#define DEFAULT_INTERVAL_BETWEEN_INTERRUPTS 5

#endif
