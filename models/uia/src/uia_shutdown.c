/************************************************************************
PURPOSE: (Print the final UIA panel state.)
*************************************************************************/
#include <stdio.h>
#include "../include/uia.h"
#include "trick/exec_proto.h"

int uia_shutdown( UIA* panel) {
    double t = exec_get_sim_time();
    printf( "========================================\n");
    printf( "      UIA Panel State at Shutdown     \n");
    
    // EMU 1 State
    printf("EMU 1: power.state %d",panel->emu[0].power.state);
    printf("EMU 1: power.voltage %f",panel->emu[0].power.voltage);
    printf("EMU 1: oxygen.valve %d",panel->emu[0].oxygen.valve);
    // EMU 2 State
    printf("EMU 2: power.state %d",panel->emu[1].power.state);
    printf("EMU 2: power.voltage %f",panel->emu[1].power.voltage);
    printf("EMU 2: oxygen.valve %d",panel->emu[1].oxygen.valve);
    
    // EV 1 State
    printf("EV 1: water.supply %d",panel->ev[0].water.supply);
    printf("EV 1: water.waste %d",panel->ev[0].water.waste);
    // EV 2 State
    printf("EV 2: water.supply %d",panel->ev[1].water.supply);
    printf("EV 2: water.waste %d",panel->ev[1].water.waste);

    // UIA Oxygen State
    printf("UIA: oxygen.vent %d",panel->oxygen.vent);
    printf("UIA: oxygen.depress_pump %d",panel->oxygen.depress_pump);
    printf("UIA: oxygen.supply_pressure %f",panel->oxygen.supply_pressure);

    printf("time %f",panel->time);
    printf( "========================================\n");
    return 0 ;
}