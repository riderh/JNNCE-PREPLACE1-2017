#include <stdio.h>
#include<conio.h>

int main()
{
    int option;

    float V;
    float I;
    float R;
    float Result;

    printf("\nEnter 1 to Calculate Current;\nEnter 2 to Calculate the Resistance;\nEnter 3 to Calculate the Voltage;\n");
    scanf("%d",&option);

    if(option==1)
    {
        printf("\nEnter The Voltage in Volts: \n");
        scanf("%f",&V);

        printf("\nEnter The Resistance in Ohms: \n");
        scanf("%f",&R);

        Result=V/R;

        printf("The Output Current in amps is,I=");
        printf("%0.2f",Result);
    }
    else if(option==2)
    {
        printf("\nEnter The Voltage in Volts: \n");
        scanf("%f",&V);

        printf("\nEnter The Current in Amps: \n");
        scanf("%f",&I);

        Result=V/I;

        printf("\nThe Output Resistance in Ohms is,R=");
        printf("%0.2f\n",Result);
    }
    else if(option==3)
    {
        printf("\nEnter The Resistance in Ohms: \n");
        scanf("%f",&R);

        printf("\nEnter The Current in Amps: \n");
        scanf("%f",&I);

        Result=I*R;

        printf("The Output Voltage in Volts is , V=");
        printf("%0.2f\n",Result);
    }
    getch();
    return 0;
}
