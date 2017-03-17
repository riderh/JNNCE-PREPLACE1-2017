#include<stdio.h>
int main()
{
int a=0,b=0;
printf("ENTER VALUES FOR a AND b\n");
scanf("%d %d",&a,&b);
printf("BEFORE SWAPING a=%d and b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("AFTER SWAPING a=%d and b=%d\n",a,b);
return 0;
}
