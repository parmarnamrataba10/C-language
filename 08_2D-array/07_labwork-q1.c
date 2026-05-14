

#include<stdio.h>

int main(){
    
    
  
    int rowsize,colsize;
    
    int sum=0;
    
    printf("enter the size for row :");
    scanf("%d",&rowsize);
    
     printf("enter the size for col :");
    scanf("%d",&colsize);
    
    

    int arr[rowsize][colsize];

    for(int i=0;i<rowsize;i++){

   for(int j=0;j<colsize;j++){
 
    printf("array[%d][%d] =",i,j);
    scanf("%d",&arr[i][j]);


        sum+=arr[i][j];
   }
 

    }
    
    float avg;

     avg=  (float)sum/(rowsize*colsize);
     
    printf("\n avg of an Array: %.2f",avg );

    return 0;

}
