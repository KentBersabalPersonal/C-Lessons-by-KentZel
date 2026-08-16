#include <stdio.h>

int main() {
    int score = 85;

    if (score >= 90) {
        printf("\nGrade: A\n");
    } else if (score >= 80) {
        printf("\nGrade: B\n");
    } else {
        printf("\nGrade: C\n");
    }

    return 0;
}

// OUTPUT IS:
// Grade: B

/*
 * MAIN IDEA:
 * Checks conditions in order and runs the first block whose condition
 * is true.
 *
 * if (score >= 90)       -> checked first; if true, prints A
 * else if (score >= 80)  -> only checked if the first was false;
 *                            score is 85 -> true -> prints B
 * else                   -> runs only if nothing above was true
 */
