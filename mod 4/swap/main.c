#include <stdio.h>


//program to swap two number without using temp variable
int main()
{
    int a=10, b=20;

    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d \nb=%d",a,b);
    return 0;
}
