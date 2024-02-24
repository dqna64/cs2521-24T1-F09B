/**
 * Run:
 * $ clang 5_palindrome_sol.c -o 5_palindrome_sol
 * $ ./5_palindrome_sol
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
    int l = 0;          // 1
    int r = strlen(s);  // 1

    while (l < r) {          // n/2
        if (s[l] != s[r]) {  // n/2
            return false;    // 1
        }
        l++;  // n/2
        r--;  // n/2
    }

    return true;  // 1
}

/**
 * Time complexity:
 * 1 + 1 + n/2 + n/2 + 1 + n/2 + n/2 + 1 = 4n/2 + 3 = O(n)
 *
 */