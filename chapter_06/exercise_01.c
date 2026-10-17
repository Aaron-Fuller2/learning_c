#include <stdio.h>

int main(void)
{
    float number, largest = 0;

    while (1 == 1)
    {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0)
        {
            printf("The largest number was: %.2f\n", largest);
            break;
        }   
        largest = (number >= largest) ? number : largest;
    }
    return 0;
}