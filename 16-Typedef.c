#include <stdio.h>

typedef unsigned int uint;   // gives "unsigned int" a shorter alias

typedef struct {
    char name[50];
    int age;
} Student;   // typedef struct lets us skip writing "struct" every time

int main() {
    uint score = 95;
    printf("\nScore: %u\n", score);

    Student s1;
    s1.age = 20;
    printf("Age: %d\n", s1.age);

    return 0;
}

// OUTPUT IS:
// Score: 95
// Age: 20

/*
 * MAIN IDEA:
 * typedef creates a new NAME (alias) for an existing type, usually to
 * make code shorter or easier to read.
 *
 * typedef unsigned int uint;
 *   -> now "uint" can be used instead of typing "unsigned int" every time
 *
 * typedef struct { ... } Student;
 *   -> without typedef, you'd have to write "struct Student s1;" every
 *      single time you make a Student variable
 *   -> WITH typedef, you can just write "Student s1;" instead — cleaner,
 *      especially once you're declaring lots of them
 *
 * This is very common in C because, unlike C++, C always requires the
 * "struct" keyword unless you use typedef to get rid of it.
 */

// MORE LIKE GIVING NAMES TO OBJECTS
