#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("\nSum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}

// OUTPUT IS:
// Sum: 13
// Difference: 7
// Product: 30
// Quotient: 3
// Remainder: 1

/*
 * MAIN IDEA:
 * Basic arithmetic operators work the same as in C++.
 *
 * a / b  -> integer division; 10 / 3 = 3 (decimal part is cut off)
 * a % b  -> modulo; gives the remainder, 10 % 3 = 1
 */

// BASICALLY THE SAME AS C++
