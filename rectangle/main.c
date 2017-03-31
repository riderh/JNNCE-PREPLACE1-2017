#include<stdio.h>
#include<math.h>
int main()
{
float l,w;
double x,y,z;
printf("enter the length and width of the rectangle\n");
scanf("%f%f",&l,&w);
x=l*w;
y=(2*l)+(2*w);
z=sqrt(((pow(l,2.0))+(pow(w,2.0))));
printf("%lf\n%lf\n%lf\n",x,y,z);
return 0;
}
