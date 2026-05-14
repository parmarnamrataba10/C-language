

#include <stdio.h>

int main()
{
    int size;
    
    printf("enter the size");
    scanf("%d",&size);
    
    int a[size],b[size],c[size];
    
    
    printf("\n enter the elements for A\n");
    
      for( int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        
        scanf("%d", &a[i]);
        
    }
    
    printf("\n enter the elements for B\n");
      for( int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        
        scanf("%d", &b[i]);
    }

     printf("\n add is ");
       for( int i = 0; i < size; i++)
    {
        c[i]=a[i]+b[i];
    }
     
     printf("the total is \n");
    
      for( int i = 0; i < size; i++)
    {
        printf ("%d\n",c[i]);
    }    
        
    return 0;
}