#include <stdio.h>

int main()
{
    float b, h, area;

    printf("Enter base: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    area = 0.5 * b * h;

    printf("Area of triangle is %.2f", area);

    return 0;
}
