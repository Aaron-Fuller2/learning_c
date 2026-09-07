#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenty, ten, five, one;

    twenty = amount / 20;
    amount = amount - (twenty * 20);

    ten = amount / 10;
    amount = amount - (ten * 10);

    five = amount / 5;
    amount = amount - (five * 5);

    one = amount;   // whatever is left

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}
