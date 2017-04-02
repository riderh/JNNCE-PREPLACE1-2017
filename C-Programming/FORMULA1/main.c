#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    while(1)
    {

    printf("Enter the value of a and b:\n");
    scanf("%f%f",&a,&b);

    c=(a+b)*(a+b);
    d=pow(a,2)+(2*a*b)+pow(b,2);

    if(c=d)

        printf("(a+b)^2=a^2+b^2+2ab is PROVED\n\n");
   // else
        //printf("(a+b)^2=a^2+b^2+2ab is NOT PROVED\n\n");

    e=(a-b)*(a-b);
    f=pow(a,2)-(2*a*b)+pow(b,2);

    if(e=f)

        printf("(a-b)^2=a^2+b^2-2ab is PROVED\n\n");
    //else
       // printf("(a-b)^2=a^2+b^2-2ab is NOT PROVED\n\n");
}
    return 0;
}
