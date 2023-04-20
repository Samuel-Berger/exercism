#include "list_ops.h"
#include <stdlib.h>
#include <stdio.h>

// numer of elements, list of elements in the list.
list_t *new_list(size_t length, list_element_t elements[])
{
    list_t *list;
    list = malloc(sizeof(&elements) * length);

    return list;
}

list_t *append_list(list_t * list1, list_t * list2){
    
    for (int i = 0; i < 3; i++)
    {
        printf("Thingy is at place %i.\n", i);
    }
    

    list_t *appendedList;
    appendedList = new_list(list1->length+list2->length,
    NULL);
    
    return appendedList;
}

void delete_list(list_t * list) {
        printf("Delete list not implemented. Size of list: %lu.\n", sizeof(&list));
}

