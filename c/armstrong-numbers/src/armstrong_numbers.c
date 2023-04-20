#include <stdio.h>
#include <math.h>

#include "armstrong_numbers.h"

/*
int main() {
    is_armstrong_number(153);
    return 0;
}
*/

bool is_armstrong_number(int candidate) {
    
    //printf("%d\n", candidate);
    
    const int original_candidate = candidate;
    int splitNumbers[1000];
    int index = 0;
    int power = 0;
    int sum = 0;

    if(candidate == 0) {
        return true;
    }

    else{

        // Split into digits.
        while (candidate > 0) {

            splitNumbers[index] = candidate % 10;

            candidate = candidate / 10;
            index++;
        }
        
        power = index;

        for(int i = 0; i < index; i++ ) {

            sum = sum + pow(splitNumbers[i], power);

        }
    }
    
    if (sum == original_candidate) {
        return true;
    }
    else {
        
        return false;
    }
}

