#include <stdio.h>

#define SIZE 100

void print_numbers(int arr[], int n);
void selection_sort(int arr[], int n);


int main(void)
{
    int numbers[SIZE];
    int n = 0;
    int value;

    printf("Enter numbers to sort (0 to stop): ");

    while (n < SIZE) {
        scanf("%d", &value);

        if (value == 0)
            break;

        numbers[n] = value;
        n++;
    }

    print_numbers(numbers, n);
    selection_sort(numbers, n);

    return 0;
}

void print_numbers(int arr[], int n)
{
    printf("The numbers array contains: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void selection_sort(int arr[], int n)
{
    int max, max_index, temp;

    if (n <= 1)
        return;

    max = arr[0];
    max_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }

    temp = arr[n - 1];
    arr[n - 1] = arr[max_index];
    arr[max_index] = temp;

    selection_sort(arr, n - 1);
}