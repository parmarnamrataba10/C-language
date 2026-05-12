#include <stdio.h>

int main()
{
    int n,i=2;
    
    printf("enter a number");
    scanf("%d",n);
    
    do{
        if(i%2==0){
            printf("%d",i);
            
        }
        i++;
        
    }while(i<=n);

    return 0;
}