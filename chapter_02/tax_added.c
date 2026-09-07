#include <stdio.h>

#define TAX 0.05

int main(void)
{
    float amount;

    printf("Enter an amount: \n");
    scanf("%f", &amount);

    printf("With tax added: %0.2f \n", amount + (amount * TAX));
}