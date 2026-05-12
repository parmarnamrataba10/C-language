

#include <stdio.h>

int main()
{

    
    int array[5] = {10, 20, 30, 40, 50};

    printf("\n before modification %d", array[0]);

    array[0] = 1000;

    printf("\n after modification %d", array[0]);

    

   

    return 0;
}