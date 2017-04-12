#include <stdio.h>

int main()
{
    int i,y;
    printf("ENTER RANGE OF ODD NUMBER\n");
    scanf("%d",&y);
    printf("THE ODD NUMBERS IN THIS RANGE ARE\n");
  for( i=1;i<=y;i+=2)
        printf("%d\n",i);
    return 0;
}
