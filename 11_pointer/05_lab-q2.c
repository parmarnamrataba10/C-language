

#include <stdio.h>

int main()
{
    int x ,y ;
    
    int *ptr1,*ptr2;
    
    printf(" enter the value for X :");
    
    scanf("%d",&x);
    
    printf(" \n enter the value for Y :");
    
    scanf("%d",&y);
    
    ptr1=&x;
    ptr2=&y;
    
    printf(" \n before swapping x and y");
    
    printf("\n x: %d",x);
    printf("\n y: %d",y);
    
    int check;
    
    check=*ptr1;
    *ptr1=*ptr2;
    *ptr2=check;
    
    
    printf("\n after the swapping ");
    
    printf("\n x: %d",x);
    printf("\n y: %d",y);
    

    return 0;
}
