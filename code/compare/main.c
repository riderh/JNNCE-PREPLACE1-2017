#include <stdio.h>

void main()
{
    int a;
    int b;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d",&b);

    if(a<b)
    {
        printf("a is less than b\n");

    }
    else if(a>b)
    {
        printf("a is greater than b\n");

    }
    else
    {
        printf("a is equal to b\n");
    }
}
