#include <stdio.h>

int main(int argc, char *argv[])
{
   float percentage=0;

   printf("Enter the pecentage:\n");
   scanf("%f",&percentage);

   if(percentage>=75)
   {
       printf("pass with distinction\n");
   }
   else if(percentage<75 && percentage>=60)
   {
       printf("pass with first class\n");
   }
   else if(percentage<60 && percentage>=35)
   {
       printf("pass with second class\n");
   }
   else
   {
       printf("FAIL\n");
}
    return 0;
}
