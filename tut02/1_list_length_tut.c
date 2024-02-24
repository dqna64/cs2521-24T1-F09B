/**
 * Run:
 * $ clang 1_list_length_tut.c linked_list.c -o 1_list_length_tut
 * $ ./1_list_length_tut
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int listLengthContainer(struct list *l);
int listLength(struct node *l);

int main() {
    struct node *list = listIntro();

    int listLengthRes = listLength(list);
    printf("Length of linked list: %d\n", listLengthRes);

    return 0;
}

int listLength(struct node *l) {
    // TODO
}
