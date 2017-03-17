#include <stdio.h>

int main()
{
  int i,j,x,Prime; //isPrime is used as flag variable
  while(1)
  {
    printf("Enter The Value of X:\n");
    scanf("%d",&x);

    printf("All Prime Numbers From 1 to X are:\n",x);

    for(i=1;i<=x;i++)
    {
        Prime=1;

        for(j=2;j<=j/2;j++)
        {
            if(i%j==0)
            {
                Prime=0;
                break;
            }
        }
    if(Prime==1)
    {
        printf("%d\n",i);
    }
    }
  }
    return 0;
}
