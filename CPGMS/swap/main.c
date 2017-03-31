#include<stdio.h>
int main()
{
int x=0,y=0;
printf("enter the values for x and y\n");
scanf("%d %d",&x,&y);
printf("before swaping a=%d and b=%d\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("after swaping x=%d and y=%d\n",x,y);
return 0;
}
