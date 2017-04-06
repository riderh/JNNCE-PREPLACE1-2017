#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,p,q,r,s;
    printf("enter the value of 'a' and 'b' respectively\n");
    scanf("%f%f",&a,&b);
    p=(a+b)*(a+b);
    q=pow(a,2)+(2*a*b)+pow(b,2);
    if(p=q)
        printf("(a+b)^2=a^2+2ab+b^2 is proved\n");
    else
        printf("(a+b)^2=a^2+2ab+b^2 is not proved\n");
    r=(a-b)*(a-b);
    s=pow(a,2)-(2*a*b)+pow(b,2);
    if(r=s)
        printf("(a-b)^2=a^2-2ab+b^2 is proved\n");
    else
        printf("(a-b)^2=a^2-2ab+b^2 is not proved\n");
return 0;
}
