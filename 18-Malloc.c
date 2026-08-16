#include <stdio.h>
#include <stdlib.h>   // needed for malloc, calloc, realloc, free

int main() {
  
    int *scores = (int*) malloc(3 * sizeof(int));   // request memory for 3 ints

    if (scores == NULL) {   // always check if malloc failed
        printf("\nMemory allocation failed!\n");
        return 1;
    }

    scores[0] = 85;
    scores[1] = 90;
    scores[2] = 78;

    for (int i = 0; i < 3; i++) {
        printf("\nScore %d: %d\n", i + 1, scores[i]);
    }

    free(scores);   // give the memory back when you're done with it

    return 0;
}

// OUTPUT IS:
// Score 1: 85
// Score 2: 90
// Score 3: 78

/*
 * MAIN IDEA:
 * malloc ("memory allocation") reserves a block of memory while the
 * program is running, instead of having a fixed size decided at compile
 * time like a regular array.
 *
 * malloc(3 * sizeof(int))
 *   -> asks for enough memory to hold 3 integers
 *   -> sizeof(int) tells us how many bytes ONE int takes, so we multiply
 *      by how many we need
 * (int*)             -> malloc returns a generic pointer, so we "cast" it
 *                       to an int pointer to match what we're storing
 * if (scores == NULL) -> malloc can fail (e.g. no memory left), so this
 *                       checks for that before using it
 * free(scores);        -> releases the memory back to the system —
 *                       forgetting this causes a "memory leak"
 */
