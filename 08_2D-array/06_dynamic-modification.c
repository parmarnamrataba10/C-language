


#include <stdio.h>

int main()
{

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int rowsize, colsize;

    printf("\nenter the row index ");
    scanf("%d", &rowsize);

    printf("\nenter the col index ");
    scanf("%d", &colsize);

    if ((int)rowsize>3 || (int)colsize > 3)
    
    {
        return printf("\nindex number can't be accessed");
    }

    int value;
    printf("\nenter update value  ");
    scanf("%d", &value);

    printf("\nbefore update %d", arr[rowsize][colsize]);

    arr[rowsize][colsize] = value;

    printf("\nafter update %d", arr[rowsize][colsize]);

    return 0;
}
