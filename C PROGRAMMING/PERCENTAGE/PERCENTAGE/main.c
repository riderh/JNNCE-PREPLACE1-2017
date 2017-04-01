#include <stdio.h>

int main(int argc, char *argv[])
{
   float percentage;
   printf("enter the percentage\n");
   scanf("%f",&percentage);
   if(percentage>=75)
   {
       printf("student has got distinction\n");
   }
   else if(percentage<75 && percentage>=60)
   {
       printf("student has secured first class\n");
   }
   else if(percentage<60 && percentage>=35)
   {
       printf("student has secured second class\n");
   }
   else
   {
       printf("fail\n");
   }
    return 0;
}
