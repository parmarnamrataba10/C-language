


#include <stdio.h>

int main()
{
    
    int n;
    
    printf("enter the size of row and col of an array :");
    
    scanf("%d",&n);

    int a[n][n],b[n][n],c[n][n];
    
    
    printf("\nenter the elements for array A\n");
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            printf("array[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        
        }
    }
    
    
     printf("\nenter the elements for array B\n");
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            printf("array[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        
        }
    }
    
      printf("\n addition  is ");
       for( int i = 0; i <n; i++)
    {
        
        for(int j=0;j<n;j++){
            
        c[i][j] = a[i][j] + b[i][j];
            
        }
    }
     
          printf("the total is C");
    
      for( int i = 0; i <n; i++)
    {
        
        for(int j=0;j<n;j++)
        
        printf ("\n%d\t",c[i][j]);
    }  
    
    printf("\n");
    
    
    
    

    return 0;
}