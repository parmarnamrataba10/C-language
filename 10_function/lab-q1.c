#include <stdio.h>

int club(int num){
    
    // if(num<0){
        
    //     printf("sorry wrong chocies");
    // }else if(num==1){
        
    //     return 1;
    // }else{
        
    //     return num*num*num;
    // }
    
    
    return num*num*num;
}



int main()
{

        int value;
        
        printf("enter the value :");
        scanf("%d",&value);
        
        int result=club(value);
        
        printf("\n result  is  :%d",result);
         


    return 0;
}