#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int main()

{

char ch;

float voltage , current , resistance , result;



printf("choose 1 to calculate the voltage\n");

printf("choose 2 to calculate the current\n");

printf("choose 3 to calculate the resistance\n");



scanf("%c",&ch);

switch(ch)

{

case '1' :

printf("enter the current in amperes\n");

scanf("%f",&current);

printf("enter the resistance in ohms.\n");

scanf("%f",&resistance);

result = current*resistance;

printf("The voltage is %f\n",result);

break;

case '2' :

printf("enter the voltage in volts\n");

scanf("%f",&voltage);

printf("enter the resistance in ohms\n");

scanf("%f",&resistance);

result = voltage / resistance;

printf("The current is %f amperes\n",result);

break;

case '3' :

printf("enter the voltage in volts\n");

scanf("%f",&voltage);

printf("enter the current in amperes\n");

scanf("%f",&current);

result = voltage / current;

printf("The resistance is %f ohms\n",result);

break;

default :

printf("not valid\n");

break;

}

return 0;

}
