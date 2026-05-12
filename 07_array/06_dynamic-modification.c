


#include <stdio.h>

int main()
{


    int array[5] = {10, 20, 30, 40, 50};

    printf("\n before modification %d", array[0]);


    printf("\nenter element for modification ");
    scanf("%d", & array[0]);

    printf("\n after dynamic modification %d", array[0]);

    return 0;
}