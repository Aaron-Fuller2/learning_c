/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
    int i, n, x;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    for (i = 1, x = 1; i <= n; i++, x++)
        {
            printf("%10d%10d%10d\n", i, i * i,x);
            if (x == 10)
            {
                printf("Press enter to continue...");
                ch = getchar();
                x = 0;
                printf("\n");
            }
        }
    return 0;
}
