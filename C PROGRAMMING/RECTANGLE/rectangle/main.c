#include <stdio.h>
#include <math.h>

int main()
{
 float length, width,area,perimeter,diagonal;
 printf("Enter length of Rectangle\n");
 scanf("%f", &length);
 printf("Enter width of Rectangle\n");
 scanf("%f", &width);
 area=length*width;
 printf("Area of Rectangle :%f\n",area);
 perimeter = 2*(length + width);
 printf("Perimeter of Rectangle :%f\n",perimeter);
 diagonal=sqrt(length*length+width*width);
 printf("Diagonal length of Rectangle :%f\n",diagonal);


 return 0;
}
