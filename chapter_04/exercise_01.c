#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a 2 digit number: ");
    scanf("%d", &num);

    int first_num = num / 10;
    int second_num = num % 10;

    printf("The reversal is: %d%d\n", second_num, first_num);

}
