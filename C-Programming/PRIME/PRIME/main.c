#include <stdio.h>

int main(int argc, char *argv[])
{
    int start,end,i,j;
    int isprime;

    printf("enter the  start limit:\n");
    scanf("%d",&start);
    printf("enter the end limit:\n");
    scanf("%d",&end);



  for(i=start;i<=end;i++)
  {
        isprime=1;

  for(j=2;j<=i/2;j++)
   {
    if(i%j==0)
    {
        isprime=0;
        break;
    }
  }
  if(isprime==1)
  {
    printf("%d\n",i);
    }
    }
    return 0;
}
