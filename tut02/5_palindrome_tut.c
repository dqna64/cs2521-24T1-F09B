/**
 * Run:
 * $ clang 5_palindrome_tut.c -o 5_palindrome_tut
 * $ ./5_palindrome_tut racecar
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPalindrome(char *s);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (isPalindrome(argv[1])) {
        printf("is a palindrome\n");
    } else {
        printf("not a palindrome\n");
    }
    return 0;
}

bool isPalindrome(char *s) {
    int i = 0;          // 1
    int j = strlen(s);  // 1

    while (i < j) {          // n/2
        if (s[i] != s[j]) {  // n/2
            return false;    // 1
        }
        i++;  // n/2
        j--;  // n/2
    }

    return true;  // 1
}
