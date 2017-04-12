#include <stdio.h>

int main()
{ int i,y[100],x;
    printf("ENTER RANGE OF FIBONOCCI NUMBER\n");
    scanf("%d",&x);
    y[0]=0;
    y[1]=1;
    for(i=2;i<x;i++)
        y[i]=y[i-1]+y[i-2];
  printf("THE FIBONOCCI NUMBERS IN THIS RANGE ARE\n");
    for(i=0;i<x;i++)
        printf("%d\n",y[i]);

    return 0;
}
