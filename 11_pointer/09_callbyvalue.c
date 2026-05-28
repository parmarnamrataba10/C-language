

#include <stdio.h>

int callByvalue(int num)
{

    num = 100;
}

int main()
{

    int numArguments = 24;

    int result = callByvalue(numArguments);

    printf("\n call by value %d", numArguments);

    return 0;
}