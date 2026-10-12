#include <stdio.h>

int main(void)
{
    int fract1_numerator, fract1_denominator;
    int fract2_numerator, fract2_denominator;
    int result_numerator, result_denominator;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",
        &fract1_numerator, &fract1_denominator,
        &fract2_numerator, &fract2_denominator);

    printf("You entered: %d/%d + %d/%d\n",
        fract1_numerator, fract1_denominator,
        fract2_numerator, fract2_denominator);

    // Compute the sum
    result_numerator =
        fract1_numerator * fract2_denominator +
        fract2_numerator * fract1_denominator;

    result_denominator =
        fract1_denominator * fract2_denominator;

    printf("The sum is: %d/%d\n",
        result_numerator, result_denominator);

    return 0;
}
