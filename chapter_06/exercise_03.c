#include <stdio.h>

int main(void)
{
    int m, n, remainder, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    
    int numerator = m, deniminator = n;

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
    printf("In lowest terms: %d/%d\n",numerator/m, deniminator/m);
}