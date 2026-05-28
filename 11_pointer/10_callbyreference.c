



#include <stdio.h>

int callByReference(int *num)
{

    *num = 100;
}

int main()
{

    int numArgument = 24;

    int *ptr = &numArgument;

    int result = callByReference(ptr);

    printf("\n call by reference %d ", numArgument);

    return 0;
}