#include <stdio.h>

int main(void)
{
    int hour, minute, adjusted_hour;

    printf("Enter a 24 hour time: ");
    scanf("%2d:%2d", &hour, &minute);

    adjusted_hour = (hour == 0) ? 12 :
                    (hour > 12) ? hour - 12 :
                    hour;

    printf("Adjusted 12 hour time is: %d:%02d\n", adjusted_hour, minute);
}
