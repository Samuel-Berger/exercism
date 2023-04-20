#include "gigasecond.h"
#include <stdio.h>

time_t gigasecond_after(time_t t) {

//    printf("Incoming time: %ld\n", t);
//    printf("Outgoing time: %ld\n", t+1000000000);
    
    //A gigasecond is 10^9 (1,000,000,000) seconds.

    return t+1000000000;
}

