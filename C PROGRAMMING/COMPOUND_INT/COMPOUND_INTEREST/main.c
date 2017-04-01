#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,t,ci;
    printf("Enter Principle\n");
    scanf("%f",&p);
    printf("Enter rate\n");
    scanf("%f",&r);
    printf("Enter time\n");
    scanf("%f",&t);
    ci=p*pow((1+r/100),t);

    printf("Compound Interest=%f",ci);
    return 0;
}
