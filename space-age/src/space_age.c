#include <stdio.h>

#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
    
    //printf("Planet: %d\n", planet);
    printf("Age in seconds: %ld\n", seconds);

    const float earth_years = seconds / 31557600;

    switch (planet)
    {
    case MERCURY:
        return earth_years / 0.2408467;
        break;
    case VENUS:
        return earth_years / 0.61519726;
        break;
    case EARTH:
        return earth_years;
        break;
    case MARS:
        return earth_years / 1.8808158;
        break;
    case JUPITER:
        return earth_years / 11.862615;
        break;
    case SATURN:
        return earth_years / 29.447498;
        break;
    case URANUS:
        return earth_years / 84.016846;
        break;
    case NEPTUNE:
        return earth_years / 164.79132;
        break;
    default:
        break;
    }
    return -1;
}