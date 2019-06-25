/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include <stdio.h>
#include "../include/uia.h"

/* default data job */
int uia_default_data( UIA* panel ) {

    /* EMU State */
    panel->emu[0].power.state = 1;
    panel->emu[0].power.voltage = 5.00;
    panel->emu[0].oxygen.valve = 0;
    panel->emu[1].power.state = 1;
    panel->emu[1].power.voltage = 5.00;
    panel->emu[1].oxygen.valve = 0;

    /* EV State */
    panel->ev[0].water.supply = 0;
    panel->ev[0].water.waste = 0;
    panel->ev[1].water.supply = 0;
    panel->ev[1].water.waste = 0;

    /* UIA Oxygen State */
    panel->oxygen.supply_pressure = 900;
    panel->oxygen.vent = 0;
    panel->oxygen.depress_pump = 0;

    panel->time = 0.0 ;
    return 0 ;
}

/* initialization job */
int uia_init( UIA* panel) {

    /* EMU State */
    panel->emu[0].power.state = 1;
    panel->emu[0].power.voltage = 5.00;
    panel->emu[0].oxygen.valve = 0;
    panel->emu[1].power.state = 1;
    panel->emu[1].power.voltage = 5.00;
    panel->emu[1].oxygen.valve = 0;

    /* EV State */
    panel->ev[0].water.supply = 0;
    panel->ev[0].water.waste = 0;
    panel->ev[1].water.supply = 0;
    panel->ev[1].water.waste = 0;

    /* UIA Oxygen State */
    panel->oxygen.supply_pressure = 900;
    panel->oxygen.vent = 0;
    panel->oxygen.depress_pump = 0;

    return 0 ; 
}