#include <stdio.h>

int main()
{
    float r, perimeter;

    printf("Enter radius: ");
    scanf("%f", &r);

    perimeter = 2 * 3.14 * r;

    printf("Perimeter of circle is %.2f", perimeter);

    return 0;
}