#include <stdio.h>

int main() {
  
    int i = 1;
    while (i <= 5) {
        printf("\nCount: %d\n", i);
        i++;
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
 * Repeats code as long as the condition is true. The counter must be
 * set up and increased manually.
 *
 * while (i <= 5)  -> checked BEFORE each loop
 * i++;            -> must be written manually, or it loops forever
 */
