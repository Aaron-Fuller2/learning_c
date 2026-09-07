#include <stdio.h>

#define PI 3.14
#define R 10

int main(void)
{
    float v = 4.0f / 3.0f * PI * (R * R * R);
    printf("The volume of the sphear is %f \n", v);
}