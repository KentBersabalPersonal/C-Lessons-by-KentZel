#include <stdio.h>

int main() {
    int board[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", board[row][col]);
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT IS:
// 1 2 3
// 4 5 6

/*
 * MAIN IDEA:
 * A 2D array is like a grid (rows and columns) instead of a single list —
 * useful for things like tables, boards, or grids of data.
 *
 * int board[2][3]     -> creates a grid with 2 rows and 3 columns
 * board[row][col]     -> accesses the value at a specific row and column
 * nested for loops     -> needed to visit every cell: the outer loop
 *                         moves through ROWS, the inner loop moves
 *                         through COLUMNS within that row
 * printf("\n")          -> moves to a new line after finishing each row,
 *                         so it prints like an actual grid
 */
