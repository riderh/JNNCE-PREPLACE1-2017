#include <stdio.h>

int main()
{
    int a=0,b=0;
    printf("Enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);


    if(a>b)printf("%d is greater than %d",a,b);
    if(a==b)printf("%d is equal to %d",a,b);
    if(a<b)printf("%d is lesser than %d",a,b);

    return 0;
}
