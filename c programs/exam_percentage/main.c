#include<stdio.h>
int main()
{
float p;
printf("ENTER YOUR PERCENTAGE \n");
scanf("%f",&p);
if(p>=70.0)
printf("DISTINCTION\n");
else if(p>=60.0)
printf("FIRST CLASS\n");
else if(p>=50.0)
printf("SECOND CLASS\n");
else if(p>=35.0)
printf("PASS CLASS\n");
else
printf("FAIL\n");
return 0;
}
