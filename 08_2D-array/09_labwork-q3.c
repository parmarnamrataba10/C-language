


#include <stdio.h>

int main()
{
  
  
  int n;
  
  
  printf("enter the size of an array :");
  scanf("%d",&n);
  
  int arr[n][n];
  
  printf("\nthe elements of array\n");
  
  for(int i=0;i<n;i++){
      
      
      for(int j=0;j<n;j++){
          
          printf("array [%d][%d] =",i,j);
          scanf("%d",&arr[i][j]);
          
          
      } 
}  
    
     printf("\n print the output\n");
     
       for(int i=0;i<n;i++){
      
      
      for(int j=0;j<n;j++){
          
          printf("\n%d",arr[i][j]);

          
          
      } 
}  
   int sum=0;
   
     for(int i=0;i<n;i++){
      
      
      for(int j=0;j<n;j++){
          
          
          if(i+j==n-1){
              
              sum+=arr[i][j];
          }
          

      } 
}  
     
               printf("\n sum of anti diagonal array is %d",sum);

     

    return 0;
}