#include <stdio.h>

int main()
{
    int num=0;
   printf("Please enter the your age: \n");
   scanf("%d",&num);

   if (num>=18)
   {
      printf(" ELIGIBL TO VOTE \n");
   }

   else
   {
      printf(" NOT ELIGIBL TO VOTE \n");
   }
    return 0;
}
