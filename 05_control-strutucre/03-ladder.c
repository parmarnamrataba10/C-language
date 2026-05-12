




#include <stdio.h>

int main()
{

    int marks;

    printf("\n enter your grade : ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("\nyour grade is A");
    }
    else if (marks >= 80)
    {
        printf("\nyour grade is B");
        }
    else if (marks >= 70)
    {
        printf("\nyour grade is C");
    }
    else if (marks >= 50)
    {
        printf("\nyour grade is D");
    }
    else if (marks >= 35)
    {
       printf("\nyour grade is E");
    }
    else
    {
        printf("\n you have failed this exame");
    }

    return 0;
}