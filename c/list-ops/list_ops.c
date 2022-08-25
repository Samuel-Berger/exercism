#include "list_ops.h"
#include <stdlib.h>
#include <stdio.h>

list_t *new_list(size_t length, list_element_t elements[])
{
    printf("Elements?: %lu.\n", sizeof(&elements));
    printf("Length?: %lu.\n", length);

    // list_t *allocList = calloc(length, sizeof(&elements));
    // return allocList;

    list_t *roman;
    roman = malloc(sizeof(char) * 100);

    return roman;
}

list_t *append_list(list_t * list1, list_t * list2){
    
    printf("%lu", sizeof(list1));
    printf("%lu", sizeof(list2));

    return list1;
}

void delete_list(list_t * list) {
        printf("%lu", sizeof(&list));
}

