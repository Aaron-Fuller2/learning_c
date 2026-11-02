#include <stdio.h>

int to_minutes(int hour, int minutes);
void closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hour, minute;
    int desired_time;
    int departure_time;
    int arrival_time;

    printf("Enter departure time: ");
    scanf("%d:%d", &hour, &minute);

    desired_time = to_minutes(hour, minute);

    closest_flight(desired_time, &departure_time, &arrival_time);

    printf("Closest departure: %d minutes\n", departure_time);
    printf("Arrival time: %d minutes\n", arrival_time);

    return 0;
}

int to_minutes(int hour, int minutes)
{
    return hour * 60 + minutes;
}

void closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int dep1 = to_minutes(8, 0);
    int arr1 = to_minutes(10, 16);

    int dep2 = to_minutes(9, 43);
    int arr2 = to_minutes(11, 52);

    int dep3 = to_minutes(11, 19);
    int arr3 = to_minutes(13, 31);

    int dep4 = to_minutes(12, 47);
    int arr4 = to_minutes(15, 0);

    int dep5 = to_minutes(14, 0);
    int arr5 = to_minutes(16, 8);

    int dep6 = to_minutes(15, 45);
    int arr6 = to_minutes(17, 55);

    int dep7 = to_minutes(19, 0);
    int arr7 = to_minutes(21, 20);

    int dep8 = to_minutes(21, 45);
    int arr8 = to_minutes(23, 58);

    if (desired_time < (dep1 + dep2) / 2) {
        *departure_time = dep1;
        *arrival_time = arr1;
    }
    else if (desired_time < (dep2 + dep3) / 2) {
        *departure_time = dep2;
        *arrival_time = arr2;
    }
    else if (desired_time < (dep3 + dep4) / 2) {
        *departure_time = dep3;
        *arrival_time = arr3;
    }
    else if (desired_time < (dep4 + dep5) / 2) {
        *departure_time = dep4;
        *arrival_time = arr4;
    }
    else if (desired_time < (dep5 + dep6) / 2) {
        *departure_time = dep5;
        *arrival_time = arr5;
    }
    else if (desired_time < (dep6 + dep7) / 2) {
        *departure_time = dep6;
        *arrival_time = arr6;
    }
    else if (desired_time < (dep7 + dep8) / 2) {
        *departure_time = dep7;
        *arrival_time = arr7;
    }
    else {
        *departure_time = dep8;
        *arrival_time = arr8;
    }
}