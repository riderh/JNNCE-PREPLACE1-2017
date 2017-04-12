#include<stdio.h>
void main()
{
    float a,b;
    printf("ENTER THE TWO NUMBERS\n");
    scanf("%f%f",&a,&b);
    if(a>b)
         printf("a is greater than b\n");
    else if(a==b)
            printf("a is equal to b\n");
    else
        printf("a is less than b\n");
}

