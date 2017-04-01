#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,res,res1;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    res=(a*a)+(b*b)+(2*a*b);
    res1=(a*a)+(b*b)-(2*a*b);
    printf("(a+b)^2=%d",res);
    printf("(a-b)^2=%d",res1);
    return 0;
}
