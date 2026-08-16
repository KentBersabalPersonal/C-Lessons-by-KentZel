#include <stdio.h>

int main() {
  
    int i = 1;
    do {
        printf("\nCount: %d\n", i);
        i++;
    } while (i <= 5);
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
 * Like a while loop, but checks the condition AFTER running the code —
 * so it always runs at least once.
 */
