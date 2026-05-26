#include <stdio.h>

void check(int num){
    
    if(num%3==0&&num%5==0){
        
        printf("yes it is divisible");
    }else{
        
        printf(" no it is not divisible by 3 and 5");
        
    }
}

int main()
{
    int value;
    
    printf(" enter the value :");
    scanf("%d",&value);
    
    check(value);
    
    return 0;
}