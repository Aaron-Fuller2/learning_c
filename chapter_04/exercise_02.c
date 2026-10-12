#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    int third_num = num % 10;
    int second_num = (num / 10 )% 10;
    int first_num = num / 100;

    printf("The reversal is: %d%d%d\n", third_num, second_num, first_num);

}
