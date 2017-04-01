#include <stdio.h>

int main()
{
    int a,b;
    float l1,r1,l2,r2;
    printf("enter values for a and b\n");
    scanf("%d%d",&a,&b);
    l1=(a+b)*(a+b);
    r1=a*a+b*b+2*a*b;
    l2=(a-b)*(a-b);
    r2=a*a+b*b-2*a*b;
    if(l1==r1)
        printf("(a+b)^2=a^2+b^2+2ab\n");
    if(l2==r2)
        printf("(a-b)^2=a^2+b^2-2ab\n");

    return 0;
}
