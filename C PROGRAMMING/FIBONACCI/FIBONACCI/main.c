#include <stdio.h>

int main()
{
   int limit,first=0,second=1,next;
   printf("enter the limit\n");
   scanf("%d",&limit);
   printf("0\t");
   printf("1\t");
   int i=1;
   while(i<=limit-2)
   {
     next=first+second;
     first=second;
     second=next;
     printf("%d\t",next);
     i++;
    }

    return 0;
}
