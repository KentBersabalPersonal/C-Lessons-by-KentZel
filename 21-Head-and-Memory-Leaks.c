#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 10;

    printf("\nValue: %d\n", *ptr);

    free(ptr);       // memory is released
    ptr = NULL;       // good practice: avoids using it by accident after freeing

    return 0;
}

// OUTPUT IS:
// Value: 10

/*
 * MAIN IDEA:
 * Every malloc/calloc/realloc MUST be paired with a free(), or the
 * memory stays reserved even after the program no longer needs it —
 * this is called a "memory leak."
 *
 * free(ptr);   -> gives the memory back to the system
 * ptr = NULL;  -> sets the pointer to "point to nothing" afterward, so
 *                accidentally using it again (a "dangling pointer")
 *                is easier to catch instead of causing random bugs
 *
 * Common mistakes beginners make:
 *   - Forgetting free() entirely -> memory leak
 *   - Using a pointer AFTER free() -> "dangling pointer" bug
 *   - Calling free() twice on the same pointer -> crash
 */
