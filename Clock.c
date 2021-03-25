#include "Clock.h"
#include "Processor.h"
#include "ComputerSystemBase.h"

int tics=0;


void Clock_Update() {

	tics++;
    // ComputerSystem_DebugMessage(97,CLOCK,tics);
	if(tics % intervalBetweenInterrupts == 0){
		//char * a = "Interrupcion de reloj\n";
		//printf(a);
		Processor_RaiseInterrupt(CLOCKINT_BIT);
	}

}


int Clock_GetTime() {

	return tics;
}
