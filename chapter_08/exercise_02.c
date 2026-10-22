#include <stdio.h>

#define true 1
#define false 0
#define SIZE 10

typedef int Bool;

int main(void)
{
    int number_entered;
    int duplicates = 0, 
        number_entered_digit_counter = 0;
    int frequency_table[SIZE] = {false};
    int number_entered_array[SIZE];

    printf("Enter a number: ");
    scanf("%d", &number_entered);

    while (number_entered != 0)
    {
        frequency_table[number_entered % 10]++;
        
        number_entered_array[number_entered_digit_counter] = number_entered % 10;
        number_entered_digit_counter++;

        number_entered /= 10;
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        if (frequency_table[i] > 1)
        {
            duplicates++;
        }
    }
    printf("%d repeated digit(s)\n", duplicates);

    printf("Repeated numbers are: ");
    for (int i = 0; i < SIZE; i++) {
        if (frequency_table[i] > 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Digit:\t\t\t");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Occurrences:\t\t");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", frequency_table[i]);
    }
    printf("\n");

    return 0;
}