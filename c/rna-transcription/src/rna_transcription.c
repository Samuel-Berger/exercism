#include "rna_transcription.h"

char *to_rna(const char *dna){

    //Should probably handle incoming NULL.

    //Find out the length of incoming string.
    int length = strlen(dna);

    //Allocate memory for the final RNA string.
    char* rna = (char* ) malloc(length + 1);

    //Use r to do the translation RNA.
    char* r = rna;
    
    printf("Incoming DNA: %s\n", dna);

    //d is the dna char to be translated.
    for (const char* d = dna; *d; d++, r++) {       
        switch (*d) {
            case 'G':
                *r = 'C';
                break;
            case 'C':
                *r = 'G';
                break;
            case 'T':
                *r = 'A';
                break;
            case 'A':
                *r = 'U';
                break;
            default:
                free(rna);
                return NULL;
        }
    }

    //Add NULL char at the end of the RNA string.
    *r = '\0';

    printf("Outgoing RNA: %s\n", rna);
    
    return rna;
    
}