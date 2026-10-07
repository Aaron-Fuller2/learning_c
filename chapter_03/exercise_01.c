#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): \n");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date: %d/%d/%d\n", day, month, year);

}