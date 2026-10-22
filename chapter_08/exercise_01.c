#include <stdio.h>
#define true 1
#define fales 0

typedef int Bool;

int main(void)
{
    int entered_number, digit;
    int input_array[10], repeated_array[10];
    int input_array_counter = 0, repeated_array_counter = 0;

    printf("Enter a number (q to quit): ");
    scanf("%d", &entered_number);

    while (entered_number != 0)
    {
        digit = entered_number % 10;
        input_array[input_array_counter] = digit;
        input_array_counter++;
        entered_number /= 10;
    }

    printf("Testing input_array_counter: %d\n", input_array_counter);
    printf("Testing input_array values: ");

    for (int i = 0; i < input_array_counter; i++)
        printf("%d ", input_array[i]);
    printf("\n"); 

    // compare input_array against itself
    for (int i = 0; i < input_array_counter - 1; i++)
    {
        for (int j = i + 1; j < input_array_counter; j++)
        {
            if (input_array[i] == input_array[j])
            {
                repeated_array[repeated_array_counter] = input_array[i]; 
                repeated_array_counter++;
            }
        }
    }

    printf("Testing repeated_array_counter: %d\n", repeated_array_counter);
    printf("Testing repeated_array values: ");

    for (int i = 0; i < repeated_array_counter; i++)
        printf("%d ", repeated_array[i]);

    printf("\n");
}
