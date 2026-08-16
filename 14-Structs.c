#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int grade;
};

int main() {
  
    struct Student s1;
    s1.age = 20;
    s1.grade = 90;

    printf("\nAge: %d\n", s1.age);
    printf("Grade: %d\n", s1.grade);

    return 0;
}

// OUTPUT IS:
// Age: 20
// Grade: 90

/*
 * MAIN IDEA:
 * A struct groups related variables into one custom type.
 *
 * struct Student { ... }  -> defines the blueprint
 * struct Student s1;       -> creates a variable of that type
 *                             (in C, you need "struct" before the type
 *                             name, unlike C++ which lets you drop it)
 * s1.age / s1.grade        -> accesses each piece of data using a dot
 */

// ONLY SYNTAX AND FORMAT SPECIFIERS WILL BE DIFFERENT TO C++ 
