#include <stdio.h>

#define SIZE 100

void print_arr(int arr[], int count);
int sort_function(int arr[], int count);

int main(void)
{
    int arr[SIZE] = {0};
    int ch, i;

    printf("Enter array to be sorted: ");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);

        ch = getchar();

        if (ch == '\n')
        {
            break;
        }
    }

    printf("The sorted arr contains: \n");
    sort_function(arr, i + 1);
    print_arr(arr, i + 1);

    return 0;
}

void print_arr(int arr[], int count)
{
    printf("arr contains: ");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int sort_function(int arr[], int count)
{
    if (count <= 1)                      /* base case: nothing left to sort */
    {
        return 0;
    }

    int largest_position = 0;

    for (int i = 1; i < count; i++)
    {
        if (arr[i] > arr[largest_position])
        {
            largest_position = i;
        }
    }

    int last_element = arr[count - 1];
    arr[count - 1] = arr[largest_position];
    arr[largest_position] = last_element;

    return sort_function(arr, count - 1);   /* recurse on the unsorted part */
}