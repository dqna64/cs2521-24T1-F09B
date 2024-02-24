/**
 * Run:
 * $ clang 2_list_count_odds_tut.c linked_list.c -o 2_list_count_odds_tut
 * $ ./2_list_count_odds_tut
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int listCountOddsContainer(struct list *l);
int listCountOdds(struct node *l);

int main() {
    struct node *list = listIntro();

    int listNumOdds = listCountOdds(list);
    printf("Number of odd nums in linked list: %d\n", listNumOdds);

    return 0;
}

int listCountOddsContainer(struct list *l) {
    // TODO
}

int listCountOdds(struct node *l) {
    // TODO
}