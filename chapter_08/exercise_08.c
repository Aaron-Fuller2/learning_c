#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grid[SIZE][SIZE] = {0},
        row_total = 0, 
        column_total = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter student %d grades: ", i + 1);

        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    // Test: print the filled array to verify
    printf("\nFilled array:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    // print row totals
    printf("\nRow Totals: ");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            row_total += grid[i][j];
        }
        printf("%d ", row_total);
        row_total = 0;
    }

    //print columns
    printf("\nColumn Totals: ");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            column_total += grid[j][i];
        }
        printf("%d ", column_total);
        column_total = 0;
    }

    printf("\n");

    return 0;
}