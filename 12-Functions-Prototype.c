#include <stdio.h>

int add(int a, int b);   // The Function Prototype

int main() {
  
    int result = add(5, 3);
    printf("\nSum: %d\n", result);
  
    return 0;
}

int add(int a, int b) {   // The Function
    return a + b;
}

// OUTPUT IS:
// Sum: 8

/*
 * MAIN IDEA:
 * A function is reusable code that performs a task when called.
 *
 * int add(int a, int b);  -> prototype: tells the compiler this function
 *                            exists before main() uses it
 * return a + b;            -> sends the result back to the caller
 */
