#include <stdlib.h>
/**
 * Array allocated on the stack
 *
 */
void stackArray(void) {
    int a[5];
    for (int i = 0; i < 5; i++) {
        a[i] = 42;
    }
}

/**
 * Array allocated on the heap
 *
 */
void heapArray(void) {
    // todo
}

int main(void) {
    stackArray();
    heapArray();
    return 0;
}