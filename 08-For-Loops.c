#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("\nCount: %d\n", i);
    }
    return 0;
}

// OUTPUT IS:
// Count: 1
// Count: 2
// Count: 3
// Count: 4
// Count: 5

/*
 * MAIN IDEA:
 * Repeats a block of code a set number of times.
 *
 * int i = 1    -> starting point (runs once)
 * i <= 5       -> condition checked before every loop
 * i++          -> runs after each loop
 */
