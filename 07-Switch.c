#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("\nMonday\n");
            break;
        case 2:
            printf("\nTuesday\n");
            break;
        case 3:
            printf("\nWednesday\n");
            break;
        default:
            printf("\nWeekend\n");
            break;
    }

    return 0;
}

// OUTPUT IS:
// Wednesday

/*
 * MAIN IDEA:
 * Checks "day" against each case and runs the matching one.
 *
 * break;    -> stops the switch from running the cases below it
 *              (without it, execution "falls through" into the next case)
 * default:  -> runs only if none of the cases matched
 */
