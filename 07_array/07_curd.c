



#include <stdio.h>

int main()
{



    // insertation 

    // static

    int n[5] = {10, 20, 30, 40, 50};

    // dynamic insert

    printf("\n enter array of element");

    scanf("%d", &n[0]);



    // iteration

    // static

    printf("\n%d", n[0]);

    // dynamic iteration

    for (int i = 0; i < 4; i++)
    {
        printf("\n%d\n", n[i]);
    }



    //  modification

    // static

    n[0] = 5;

    // dynamic modification

    printf("\n enter updated num value\n");

    scanf("%d", &n[0]);



    // delete 

    int pos = 1;

    for (int i = pos; i < 4; i++)
    {
        n[i] = n[i + 1];
    }

    printf("\n array with no  deleted element\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n%d\n", n[i]);
    }

    return 0;
}