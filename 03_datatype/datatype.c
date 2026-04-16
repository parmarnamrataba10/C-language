#include<stdio.h>

int main(){


    //integer
      int num = 10;

    // float

    float decimalValue = 31.10;

    // char

    char character = 'n';

    // string    // this can't be changed

    char *string = "this is my string";

    // this can be modifyble

    char anotherString[50] = "this is another string";

    anotherString[1] = 'n';

    printf("\n%c", anotherString[1]);

    return 0;
  
}