#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers to be swapped\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swapping are %d and %d",a,b);
    return 0;
}
