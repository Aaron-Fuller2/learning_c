#include <stdio.h>

int main(void)
{
    int m, n, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (1 == 1) 
    {
        if (n == 0) 
        {
            printf("Greatest common divisor: %d\n", m);
            break;
        }

        remainder = m % n;
        m = n;
        n = remainder;
    }
}