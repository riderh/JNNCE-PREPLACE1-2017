#include <stdio.h>

int main()
{
int a,b,output,output1;

printf("enter the value of a:\n");
scanf("%d",&a);
printf("enter the value of b:\n");
scanf("%d",&b);

output=((a*a)+(b*b)+(2*a*b));
output1=((a*a)+(b*b)-(2*a*b));

printf("result of (a+b)^2 is %d\n",output);
printf("result of (a-b)^2 is %d\n",output1);


    return 0;
}
