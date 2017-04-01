#include <stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    float a,b,ar,pr,dl;
    printf("enter the sides of the rectangle\n");
    scanf("%f %f",&a,&b);
    pr=2*a+2*b;
    ar=a*b;
    dl=sqrt(a*a+b*b);
    printf("area=%f /nperimeter=%f \ndiagonal=%f",ar,pr,dl);
    return 0;
}
