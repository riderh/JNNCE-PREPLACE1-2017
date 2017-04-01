#include <stdio.h>

int main(int argc, char *argv[])
{
   int count;
   int i;
   printf("enter the count\n");
   scanf("%d",&count);
   for(i=0;i<=count;i++)
   {
     if(i%2==0)
     {
         continue;
     }
     printf("%d\n",i);
   }
    return 0;
}
