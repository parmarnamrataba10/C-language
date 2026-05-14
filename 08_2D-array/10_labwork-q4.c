


#include <stdio.h>

int main()
{
    int n=5;

    

    int arr[5][5];

    printf("\nenter the elements of array\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

   


    int sum = 0;

    printf("\nboundary elements are\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                printf("%d ",arr[i][j]);

                sum += arr[i][j];
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("\nsum of boundary elements is %d",sum);

    return 0;
}
