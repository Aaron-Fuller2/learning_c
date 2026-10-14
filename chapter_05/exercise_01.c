#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digit_count = (num < 10)  ? 1:
                      (num < 100) ? 2:
                                    3;
                                    
    printf("%d has %d digit(s)\n", num, digit_count);
    
}