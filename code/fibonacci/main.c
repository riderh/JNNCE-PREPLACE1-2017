#include <stdio.h>

void main()
{
   int i;
    int a=0;
    int b=1;
    int next;
    int limit;

    printf("Enter the limit\n");

    scanf("%d",&limit);

    printf("%d\t,%d\t", a,b);

    for(i=2;i<limit;i++)
    {
     next=a+b;
     a=b;
     b=next;
     printf("%d\t",next);
    }
}
