#include<stdio.h>
#include<math.h>
int main()
{
    float p,ci,r,t,k;
    int n;
    printf("enter the principle amount\n");
    scanf("%f",&p);
    printf("enter the annual rate in terms of interst\n");
    scanf("%f",&r);
    printf("enter the time span in the yrs\n");
    scanf("%f",&t);
    printf("enter the number of year the interst is compounded in one year\n");
    scanf("%d",&n);
    k=r/100;
    ci=p*pow((1+(k/n)),(n*t))-p;
    printf("The compound interst is %f\n",ci);
    return 0;
}
