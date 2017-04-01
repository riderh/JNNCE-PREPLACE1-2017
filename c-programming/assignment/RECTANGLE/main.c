#include <stdio.h>
#include<math.h>
int main()
{

    int l;
    int w;
    int area,perimeter;
    float diagonal;

    printf("enter the length of the rectangle: \n ");
    scanf("%d",&l);
    printf("enter the width of the rectangle: \n ");
    scanf("%d",&w);
    area =w*l;
    perimeter =((2*l)+(2*w));
    diagonal =sqrt(pow(l,2)+pow(w,2));
printf("the area of rectangle is :%d\n ",area);
  printf("the perimeter of rectangle is :%d\n ", perimeter);
printf("the diagona of rectangle is :%f\n ",diagonal);
    return 0;
}
