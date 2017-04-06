#include<stdio.h>
int main()
{
char opt;
float current,resistance,voltage;
printf("CHOOSE WHAT YOU WANT TO CALCULATE:\nA)VOLTAGE\nB)CURRENT\nC)RESISTANCE\n");
scanf("%c",&opt);
switch(opt)
{
case 'A' : printf("ENTER CURRENT IN AMPS AND RESISTANCE IN OHMS RESPECTIVELY\n");
           scanf("%f%f",&current,&resistance);
           voltage=current*resistance;
           printf("THE VOLTAGE VALUE IN VOLTS IS %f\n",voltage);
    break;

 case 'B': printf("ENTER THE VOLTAGE IN VOLTS AND RESISTANE IN OHMS RESPECTIVELY\n");
           scanf("%f%f",&voltage,&resistance);
           current=voltage/resistance;
           printf("THE CURRENT VALUE IN AMPS IS %f\n",current);
    break;

case 'C': printf("ENTER THE VOLTAGE IN VOLTS AND CURRENT IN AMPS RESPECTIVELY\n");
          scanf("%f%f",&voltage,&current);
          resistance=voltage/current;
           printf("THE RESISTANCE VALUE IN OHMS IS %f\n",resistance);
    break;

}
return 0;
}
