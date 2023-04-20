#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

#include <stdint.h>
#include <string.h>
#include <stdio.h>

typedef enum Colors {
    BLACK   = 0,
    BROWN   = 1,
    RED     = 2,
    ORANGE  = 3,
    YELLOW  = 4,
    GREEN   = 5,
    BLUE    = 6,
    VIOLET  = 7,
    GREY    = 8,
    WHITE   = 9
}colors_t;

typedef enum Resistor_Band {
    Band1,
    Band2
}resistor_band_t;


uint16_t color_code(resistor_band_t band[]);


#endif
