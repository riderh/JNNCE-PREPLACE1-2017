#include <stdio.h>

int main()
{ int i,a[100],x;
    printf("ENTER RANGE OF FIBONOCCI NUMBER\n");
    scanf("%d",&x);
    a[0]=0;
    a[1]=1;
    for(i=2;i<x;i++)
        a[i]=a[i-1]+a[i-2];
  printf("THE FIBONOCCI NUMBERS IN THIS RANGE ARE\n");
    for(i=0;i<x;i++)
        printf("%d\n",a[i]);

    return 0;
}
