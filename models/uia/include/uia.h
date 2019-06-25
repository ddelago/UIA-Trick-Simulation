/*************************************************************************
PURPOSE: (Represent the state and initial conditions of the UIA panel)
**************************************************************************/
#ifndef UIA_H
#define UIA_H

struct  WATER {
    int supply; /* *i -- Supply switch position */
    int waste;  /* *i -- Waste switch position */
};

struct EV {
    struct WATER water;
};

struct OXYGEN {
    int valve;              /* *i -- Valve switch position */ 
};

struct UIA_OXYGEN {
    double supply_pressure; /* *i psi EMU supply pressure */
    int vent;               /* *i -- Vent switch position */ 
    int depress_pump;       /* *i -- Depress pump switch position */ 
};

struct POWER {
    int state;      /* *i -- State of switch position */ 
    double voltage; /* *i V Voltage */ 
};

struct EMU {
    struct POWER power;
    struct OXYGEN oxygen;
} ;

typedef struct {
    struct EMU emu[2];
    struct EV ev[2];
    struct UIA_OXYGEN oxygen;
    double time;        /* s Model time */
} UIA ;

#ifdef __cplusplus
extern "C" {
#endif
    int uia_default_data(UIA*) ;
    int uia_init(UIA*) ;
    int uia_shutdown(UIA*) ;
#ifdef __cplusplus
}
#endif

#endif