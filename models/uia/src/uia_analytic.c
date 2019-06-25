/*****************************************************************************
PURPOSE:    ( Analytical UIA )
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "../include/uia_analytic.h"

int uia_analytic( UIA* panel ) {

    /************** EMU POWER **************/
    // EMU 1 Power State
    if( panel->emu[0].power.state == 1 ) {
        panel->emu[0].power.voltage = 5.00;
    } else if( panel->emu[0].power.state == 0 ) {
        panel->emu[0].power.voltage = 0.00;
    }
    // EMU 2 Power State
    if( panel->emu[1].power.state == 1 ) {
        panel->emu[1].power.voltage = 5.00;
    } else if( panel->emu[1].power.state == 0 ) {
        panel->emu[1].power.voltage = 0.00;
    }

    /************** EMU OXYGEN **************/
    // EMU 1 O2 Valve Switch Position
    if( panel->emu[0].oxygen.valve == 1 ) {
        panel->oxygen.supply_pressure -= .01;
    }
    // EMU 2 O2 Valve Switch Position
    if( panel->emu[1].oxygen.valve == 1 ) {
        panel->oxygen.supply_pressure -= .01;
    }

    /************** UIA OXYGEN **************/
    // UIA Oxygen Vent Switch Position
    if( panel->oxygen.vent == 1 ) {
        panel->oxygen.supply_pressure -= .01;
    }
    // UIA Depress Pump Switch Position
    if( panel->oxygen.depress_pump == 1 ) {
        panel->oxygen.supply_pressure -= .01;
    }
    // UIA Supply Pressure Max and Min
    if ( panel->oxygen.supply_pressure >= 900 ) {
        panel->oxygen.supply_pressure = 900;
    }
    else if( panel->oxygen.supply_pressure <= 0 ) {
        panel->oxygen.supply_pressure = 0;
    }

    /*
     * Increment time by the time delta associated with this job
     * Note that the 0.01 matches the frequency of this job
     * as specified in the S_define.
     */
    panel->time += 0.01 ;
    return 0 ;
}