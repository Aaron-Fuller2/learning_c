#include <stdio.h>

#define SIZE 10

int main(void)
{
    int number_entered;

    while (1) {   // ⭐ keep asking until user enters <= 0

        printf("Enter a number (<= 0 to quit): ");
        scanf("%d", &number_entered);

        if (number_entered <= 0)
            break;

        int duplicates = 0;
        int number_entered_digit_counter = 0;
        int frequency_table[SIZE] = {0};
        int number_entered_array[SIZE];

        while (number_entered != 0)
        {
            int digit = number_entered % 10;

            frequency_table[digit]++;
            number_entered_array[number_entered_digit_counter] = digit;
            number_entered_digit_counter++;

            number_entered /= 10;
        }

        for (int i = 0; i < SIZE; i++)
            if (frequency_table[i] > 1)
                duplicates++;

        printf("%d repeated digit(s)\n", duplicates);

        printf("Repeated numbers are: ");
        for (int i = 0; i < SIZE; i++)
            if (frequency_table[i] > 1)
                printf("%d ", i);
        printf("\n");

        printf("Digit:\t\t\t");
        for (int i = 0; i < SIZE; i++)
            printf("%d ", i);
        printf("\n");

        printf("Occurrences:\t\t");
        for (int i = 0; i < SIZE; i++)
            printf("%d ", frequency_table[i]);
        printf("\n\n");
    }

    return 0;
}
