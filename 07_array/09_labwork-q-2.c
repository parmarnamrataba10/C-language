

#include <stdio.h>

int main() {
    
    int  size;

    int sum=0;

    printf("Enter array size: ");
    scanf("%d", &size);
    
  int array[size];

    printf("Enter array elements:\n");
    for( int i = 0; i < size; i++)
    {
        printf("array[%d] = ", i);
        
        scanf("%d", &array[i]);

        sum=sum+array[i];
}

float avg;

     avg=  (float)sum/size;
     
    printf("\n avg of an Array: %.2f",avg );

    return 0;
}

