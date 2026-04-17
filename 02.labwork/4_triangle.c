

#include<stdio.h>

int main(){

    float firstangle,secondangle,thirdangle;

  
    printf("\n enter firstangle ");
    scanf("%f",&firstangle);



    printf("\n enter secondangle");
    scanf("%f",&secondangle);

    thirdangle =  180-(firstangle+secondangle);

    printf(" the thridangle value is %.2f",thirdangle);

    return 0;

}
