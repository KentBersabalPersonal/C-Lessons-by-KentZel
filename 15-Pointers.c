#include <stdio.h>

int main() {
  
    int number = 10;
    int *ptr = &number;   // Pointer: stores the ADDRESS of "number"

    printf("\nValue: %d\n", number);
    printf("Pointer's value: %d\n", *ptr);

    *ptr = 20;   //  Changes "number" through the pointer
    printf("After *ptr = 20, number is: %d\n", number);

    return 0;
}

// OUTPUT IS:

// Value: 10
// Pointer's value: 10
// After *ptr = 20, number is: 20

/*
 * MAIN IDEA:
 * A pointer stores the memory address of a variable.
 * (C has no references like C++ does — pointers are the main tool.)
 *
 * &number  -> "address-of" operator, gets number's memory address
 * int *ptr -> declares a pointer that holds an address
 * *ptr     -> "dereference" operator, gets/sets the VALUE at that address
 */
