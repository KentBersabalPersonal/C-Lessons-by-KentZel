#include <stdio.h>

void greet(char name[]);   // The Function Prototype

int main() {
  
    greet("Kent");
  
    return 0;
}

void greet(char name[]) {   // The Function
    printf("\nHello, %s! Welcome to C.\n", name);
}

// OUTPUT IS:
// Hello, Kent! Welcome to C.

/*
 * MAIN IDEA:
 * A void function performs an action but returns nothing back.
 *
 * void greet(char name[]);  -> "void" means no return value
 * char name[]                -> arrays are how C passes text into functions
 */
