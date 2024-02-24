/**
 * Run:
 * $ clang 4_list_delete_tut.c linked_list.c -o 4_list_delete_tut
 * $ ./4_list_delete_tut
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

struct node *listDelete(struct node *l, int value);

int main() {
    struct node *list = listIntro();
    printf("Value to delete: ");
    int value;
    scanf("%d", &value);

    list = listDelete(list, value);
    printf("List after delete: ");
    printList(list);

    return 0;
}

struct list *listDeleteContainer(struct list *l, int value) {
    l->head = listDelete(l->head, value);
    return l;
}

/**
 * Recursive function to delete the first occurence of a value in a linked list.
 */
struct node *listDelete(struct node *l, int value) {
    if (l == NULL) {
        return NULL;
    }

    if (l->value == value) {
        struct node *next = l->next;
        free(l);
        return next;
    } else {
        l->next = listDelete(l->next, value);
        return l;
    }
}