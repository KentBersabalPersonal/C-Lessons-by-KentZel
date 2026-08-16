#include <stdio.h>

int main() {
  
    int age = 20;
    float gpa = 3.75;
    double pi = 3.14159265;
    char grade = 'A';
    char name[] = "Kent";

    printf("\nInteger: %d\n", age);
    printf("Float: %f\n", gpa);
    printf("Float (2 decimals): %.2f\n", gpa);
    printf("Double: %lf\n", pi);
    printf("Char: %c\n", grade);
    printf("String: %s\n", name);

    return 0;
}

// OUTPUT IS:
// Integer: 20
// Float: 3.750000
// Float (2 decimals): 3.75
// Double: 3.141593
// Char: A
// String: Kent

/*
 * MAIN IDEA:
 * printf/scanf don't know the type of a variable automatically — you
 * have to tell them using a "format specifier" that matches the type.
 *
 * %d   -> int (whole numbers)
 * %f   -> float (shows 6 decimal places by default, e.g. 3.750000)
 * %.2f -> float, but limited to 2 decimal places (the ".2" controls this)
 * %lf  -> double ("long float" — used for more precise decimals)
 * %c   -> a single character
 * %s   -> a string (char array)
 *
 * Using the WRONG specifier (like %d for a float) prints garbage values
 * instead of an error — this is a very common beginner bug in C.
 */
