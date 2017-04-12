#include<stdio.h>
#include<math.h>
int main()
{
    float P,CI,r,t,k;
    int n;
    printf("ENTER THE PRINCIPLE AMOUNT\n");
    scanf("%f",&P);
    printf("ENTER THE ANNUAL RATE OF INTEREST IN TERMS OF PERENTAGE\n");
    scanf("%f",&r);
    printf("ENTER THE TIME SPAN IN TERMS OF YEARS\n");
    scanf("%f",&t);
    printf("ENTER THE NUMBER OF YEARSTHE INTEREST IS COMPOUNDED IN ONE YEAR\n");
    scanf("%d",&n);
    k=r/100;
    CI=P*pow((1+(k/n)),(n*t))-P;
    printf("THE COMPOUND INTEREST IS %f\n",CI);
    return 0;
}

