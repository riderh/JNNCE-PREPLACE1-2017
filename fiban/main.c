#include <stdio.h>

int main()
{ int i,a[100],y;
    printf("enter the range of the numbers\n");
    scanf("%d",&y);
    a[0]=0;
    a[1]=1;
    for(i=2;i<y;i++)
        a[i]=a[i-1]+a[i-2];
  printf("fibonocci numbers are in this range\n");
    for(i=0;i<y;i++)
        printf("%d\n",a[i]);

    return 0;
}
