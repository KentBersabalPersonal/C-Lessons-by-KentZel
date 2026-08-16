#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int *scores = (int*) calloc(3, sizeof(int));   // 3 ints, all set to 0

    if (scores == NULL) {
        printf("\nMemory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("\nScore %d (before setting): %d\n", i + 1, scores[i]);
    }

    free(scores);
  
    return 0;
}

// OUTPUT IS:
// Score 1 (before setting): 0
// Score 2 (before setting): 0
// Score 3 (before setting): 0

/*
 * MAIN IDEA:
 * calloc ("contiguous allocation") is like malloc, but it automatically
 * sets every value to 0 — malloc leaves the memory with "garbage" (random
 * leftover) values until you set them yourself.
 *
 * calloc(3, sizeof(int))
 *   -> first number: how many items
 *   -> second number: the size of EACH item
 *   -> (malloc takes just one number: total size, so you multiply it
 *      yourself — calloc does that math for you)
 */
