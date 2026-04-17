#include <stdio.h>

int main()
{
    float l, area;

    printf("Enter length: ");
    scanf("%f", &l);

    area = l * l;

    printf("Area of square is %.2f", area);

    return 0;
}
