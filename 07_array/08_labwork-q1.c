


#include <stdio.h>

int main() {
    int size;

    
    printf("Enter array size: ");
    scanf("%d", &size);
  
  int array[size];
  

    printf("Enter array elements:\n");
    
    for( int i = 0; i < size; i++)
    {
        printf("array[%d] = ", i);
        
        scanf("%d", &array[i]);
    }


    printf("\nLength of an Array: %d", size);

    return 0;
}