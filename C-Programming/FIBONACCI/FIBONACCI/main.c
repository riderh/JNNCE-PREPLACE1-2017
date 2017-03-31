#include <stdio.h>

int main(int argc, char *argv[])
{
    int limit;
    int t1=0;
    int t2=1;
     int nextterm=0;
    printf("enter the limit:\n");
    scanf("%d",&limit);

    printf("%d\n%d\n",t1,t2);
     nextterm=t1+t2;

    while(nextterm<=limit)
    {
       printf("%d\n",nextterm);
      t1=t2;
      t2=nextterm;
      nextterm=t1+t2;

    }
    return 0;
}
