#include <stdio.h>

#define PI 3.14

int main(void)
{
    float  r;
    printf("Enter the radious of a sphear: \n");
    scanf("%f", &r);

    float v = 4.0f / 3.0f * PI * (r * r * r);
    printf("The volume of the sphear is %f \n", v);
}