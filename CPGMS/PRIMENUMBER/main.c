#include <stdio.h>

int main()
{
    int f=1,n,i,j;

    printf("ENTER RANGE OF PRIME NUMBERS\n");
    scanf("%d",&n);
    printf("THE PRIME NUMBERS ARE\n");
    for(i=2;i<=n;i++)
    {
        f=1;
    for(j=2;j<=i/2;j++)
    {

      if(i%j==0)
      {
          f=0;
          break;

     }
    }
      if(f==1)
      printf("%d\n",i);
    }

    return 0;
}
