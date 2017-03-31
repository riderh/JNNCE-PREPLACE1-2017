#include <stdio.h>
#include<conio.h>

int main()
{
    float Principle;
    float Rate;
    float Time;
    float CI,amt;

    printf("\nEnter The Principle Amount: \n");
    scanf("%f",&Principle);

    printf("\nEnter The Time (No. of Years): \n");
    scanf("%f",&Time);

    printf("\nEnter The Rate of Annual Interest: \n");
    scanf("%f",&Rate);

    amt=Principle*pow((1+Rate/100),Time);
    CI=amt-Principle;

    printf("\nAfter %0.1f years\n",Time);
    printf("\nTOTAl Amount=%0.2f\n",amt);
    printf("\nThe Compound Interest=%0.2f\n\n",CI);

    return 0;
}
