#include<stdio.h>
void main()
{
int a,b;
printf("enter two numbers : ");
scanf("%d%d",&a,&b);
printf("number before swapping %d %d",a,b);
a = a+b;
b = a -b;
a = a - b;
printf("\nnumber after swapping %d %d ",a,b);
}
