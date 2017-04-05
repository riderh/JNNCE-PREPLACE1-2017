#include <stdio.h>

int main(int argc, char *argv[])
{
   int limit=0;
   int i;
   printf("enter the limit :");
   scanf("%d",&limit);
   for(i=0;i<limit;i++)
   {
       if((i%2)==0)
       {
           continue;
       }
       printf("%d\n",i);
   }
   return 0;
}
