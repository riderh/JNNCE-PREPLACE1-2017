#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,res,res1,res2,res3;
    printf("enter the value of a and b\n");
    scanf("%f%f",&a,&b);
    res=(a+b)*(a+b);
    res1=pow(a,2)+pow(b,2)+(2*a*b);
    if(res=res1)
        printf("(a+b)^2 is equal to a^2+2ab+b^2\n");
    else
        printf("invalid\n");
    res2=(a-b)*(a-b);
    res3=pow(a,2)+pow(b,2)-(2*a*b);
    if(res2=res3)
        printf("(a+b)^2 is equal to a^2-2ab+b^2\n");
    else
        printf("invalid\n");
    return 0;
}
