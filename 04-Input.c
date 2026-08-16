#include <stdio.h>

int main() {
    char name[50];
    printf("\nEnter your name: ");
    scanf("%s", name);

    printf("\nHello, %s!\n", name);
    return 0;
}

// OUTPUT IS:
// Hello, ENTERED NAME!

/*
 * MAIN IDEA:
 * This program asks the user to type their name (input), stores it,
 * then greets them using that input.
 *
 * char name[50]   -> C has no built-in "string" type, so text is stored
 *                     as an array of characters instead
 * scanf("%s", name) -> reads user input and stores it into "name"
 *                     (no "&" needed here since arrays already act as
 *                     an address; this would differ for int/float)
 */
