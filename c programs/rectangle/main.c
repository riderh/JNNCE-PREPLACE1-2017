#include<stdio.h>
#include<math.h>
int main()
{
float l,w;
double a,p,d;
printf("ENTER LENGTH AND WIDTH OF RECTANGELE\n");
scanf("%f%f",&l,&w);
a=l*w;
p=(2*l)+(2*w);
d=sqrt((pow(l,2.0))+(pow(w,2.0)));
printf("%lf\n%lf\n%lf\n",a,p,d);
return 0;
}
