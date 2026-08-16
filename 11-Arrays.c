#include <stdio.h>

int main() {
  
    int grades[5] = {85, 90, 78, 92, 88};

    for (int i = 0; i < 5; i++) {
        printf("\nGrade %d: %d\n", i + 1, grades[i]);
    }
  
    return 0;
}

// OUTPUT IS:
// Grade 1: 85
// Grade 2: 90
// Grade 3: 78
// Grade 4: 92
// Grade 5: 88

/*
 * MAIN IDEA:
 * Stores multiple values of the same type, accessed by index (starting at 0).
 *
 * grades[i]  -> accesses the value at position i
 *               (grades[0] is the FIRST item, not grades[1])
 */
