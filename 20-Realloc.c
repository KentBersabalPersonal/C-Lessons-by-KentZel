#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int *scores = (int*) malloc(2 * sizeof(int));
    scores[0] = 85;
    scores[1] = 90;

    // Need more space now — grow it to hold 4 ints instead of 2
    scores = (int*) realloc(scores, 4 * sizeof(int));

    if (scores == NULL) {
        printf("\nReallocation failed!\n");
        return 1;
    }

    scores[2] = 78;
    scores[3] = 92;

    for (int i = 0; i < 4; i++) {
        printf("\nScore %d: %d\n", i + 1, scores[i]);
    }

    free(scores);
  
    return 0;
}

// OUTPUT IS:
// Score 1: 85
// Score 2: 90
// Score 3: 78
// Score 4: 92

/*
 * MAIN IDEA:
 * realloc ("re-allocation") resizes memory you already allocated —
 * useful when you don't know the final size upfront.
 *
 * realloc(scores, 4 * sizeof(int))
 *   -> takes the OLD pointer, and the NEW total size you want
 *   -> keeps the existing values (85, 90) and adds room for more
 *   -> IMPORTANT: always reassign it back to "scores" — realloc may
 *      move the memory to a new address, so using the old pointer
 *      afterward can crash the program
 */
