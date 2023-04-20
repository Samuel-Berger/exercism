//https://codeforwin.org/2016/04/c-program-to-count-occurrences-of-word-in-string.html

#include <stdio.h>
#include <string.h>

#include "word_count.h"

/*
typedef struct word_count_word {
   char text[MAX_WORD_LENGTH + 1];      // allow for the string to be null-terminated
   int count;
} word_count_word_t;
*/

int count_words(const char *sentence, word_count_word_t * words){
 
    printf("Sentence: %s\n", sentence);
    strcpy(words->text, sentence);
    int totalWords = 1;
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        
        //printf("Text: %c\n", sentence[i]);

        //Count all the words in the sentence.
        if(sentence[i] == ' ' && sentence[i+1] != ' ') {
            totalWords++;
        }
    }

    if(totalWords == 1) {
        return 1;
    }
    
    //int count = findOccurrences(sentence, "fish");
    printf("TotalWords %d\n", totalWords);
        
    //wc.count = words->count;
    //wc.text = words->text;
    //printf("Text: %s\n", words->text);
    //printf("Count: %d\n", words->count);
    
    return words->count;
}

int findOccurrences(const char* sentence, const char* key) {
    
    int stringLength = strlen(sentence);
    int searchLength = strlen(key);
    int count = 0;
    int found = 1;

    for(int i = 0; i <= stringLength-searchLength; i++) {

        found = 1;

        for(int j = 0; j<searchLength; j++) {
        
            if (sentence[i+j] != key[j]) {
        
                //printf("? %c\n", sentence[i+j]);
                found = 0;
                break;
            }
        }

        if(found == 1) {
            count++;
        }
    }

    return count;
}