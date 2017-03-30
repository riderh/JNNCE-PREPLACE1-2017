#include <stdio.h>

int var1;
int var2;
int main()
{
 printf("enter the first variable\n");
 scanf("%d",&var1);
 printf("enter the second variable\n");
 scanf("%d",&var2);

 var1=var1+var2;
 var2=var1-var2;
 var1=var1-var2;
 printf("swap ouput:var1=%d var2=%d",var1,var2);
    return 0;
}
