#include "roman_numerals.h"
#include <stdio.h>
#include <stdlib.h>

char *to_roman_numeral(unsigned int number)
{
    char *roman;
    roman = malloc(sizeof(char) * 100);
    unsigned int place = 0;

    // I, V, X, L, C, D, M
    // if (!(number % 1000)) { roman += 'M'; number -= 1000; }
    // else if (!(number % 500)) { roman += 'D'; number -= 500; }
    // else if (!(number % 100)) { roman += 'C'; number -= 100; }
    // else if (!(number % 50)) { roman += 'L'; number -= 50; }
    // else if (!(number % 10)) { roman += 'X'; number -= 10; }
    // else if (!(number % 5)) { roman += 'V'; number -= 5; }
    // else if (!(number % 1)){ roman += 'I'; number -= 1; }

    if (!(number % 5))
    {
        // place = 0;

        while (place != number)
        {
            // printf("%i", number);
            roman[place] = 'V';
            // number -= 1;
            // place++;
            // roman += 'V';
            number = number - 5;
        }
    }

    else if (!(number % 1))
    {
        // place = 0;
        while (place != number)
        {
            // printf("%i", number);
            roman[place] = 'I';
            // number -= 1;
            place++;
            // number--;
        }
    }



    return roman;

    // Handle under 3000
    // Handle under 1
}
