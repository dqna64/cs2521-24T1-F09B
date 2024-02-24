/**
 * Run:
 * $ clang 4_list_delete_sol.c linked_list.c -o 4_list_delete_sol
 * $ ./4_list_delete_sol
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

/**
 * Recursive function to delete the first occurence of a value in a linked list.
 */
struct node *listDelete(struct node *l, int value) {
    if (l == NULL) {
        return l;
    }
    if (value == l->value) {
        struct node *subList = l->next;
        free(l);
        return subList;
    } else {
        l->next = listDelete(l->next, value);
        return l;
    }
}