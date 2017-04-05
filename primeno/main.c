#include <stdio.h>

int main()
{
    int r=1,n,i,j;

    printf("enter the range\n");
    scanf("%d",&n);
    printf("prime no are\n");
    for(i=2;i<=n;i++)
    {
        r=1;
    for(j=2;j<=i/2;j++)
    {

      if(i%j==0)
      {
          r=0;
          break;

     }
    }
      if(r==1)
      printf("%d\n",i);
    }

    return 0;
}
