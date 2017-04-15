#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,res,res1;
    int x,x1,y,y1;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    x=(a+b)*(a+b);
    y=(a*a)+(b*b)+(2*a*b);
    res=(x=y);
    x1=(a-b)*(a-b);
    y1=(a*a)+(b*b)-(2*a*b);
    res1=(x1=y1);
    if(x==y)
        printf("res is proved\n");
    else
        printf("res is not proved\n");
    if(x1==y1)
        printf("res1 is proved\n");
    else
        printf("res1 is not proved\n");
    return 0;
}
