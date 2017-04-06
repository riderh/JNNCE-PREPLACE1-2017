#include <stdio.h>

int main()
{
    int i,x;
    printf("ENTER RANGE OF ODD NUMBER\n");
    scanf("%d",&x);
    printf("THE ODD NUMBERS IN THIS RANE ARE\n");
  for( i=1;i<=x;i+=2)
        printf("%d\n",i);
    return 0;
}
