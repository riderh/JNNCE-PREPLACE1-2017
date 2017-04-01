#include<stdio.h>
int main()
{
float p;
printf("enter the percentage \n");
scanf("%f",&p);
if(p>=70.0)
printf("distinction\n");
else if(p>=60.0)
printf("first class\n");
else if(p>=50.0)
printf("second class\n");
else if(p>=35.0)
printf("pass\n");
else
printf("fail\n");
return 0;
}
