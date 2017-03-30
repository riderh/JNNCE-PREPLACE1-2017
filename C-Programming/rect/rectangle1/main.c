#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int length;
int breadth;
int area;
int perimeter;
float dialength;

printf("enter the length:\n");
scanf("%d",&length);
printf("enter the breadth:\n");
scanf("%d",&breadth);

area=length*breadth;
perimeter=2*(length+breadth);
dialength=sqrt(length*length+breadth*breadth);

printf("the area of rectangle is:%d\n",area);
printf("the perimeter of rectangle is:%d\n",perimeter);
printf("the dialength of rectangle is:%f\n",dialength);

    return 0;
}
