#include <stdio.h>
#include "version1.h"
extern int a,b;
void addint()
{
    int z=0;
   z= a+b;
    printf("ADDITION RESULT=%d\n",z);
    return;
}
void subint()
{
    int z=0;
    z=a-b;
    printf("SUBTRACTION IS =%d\n",z);
    return;
}
void multiint()
{
    int z=0;
    z=a*b;
    printf("THE RESULTS OF MULTIPLICATION=%d\n",z);
    return;
}
void divideint()
{
    int z=0;
    if(b!=0)

{
        printf("%d",z);
        z= a / b;
    printf("THE RESULT OF DIVISION=%d\n",z);
}
 else
        printf("ERROR:DIVIOSOR CAN NOT BE ZERO\n");
    return;
}
void primeint()
{
    int i,j,f;
    printf("THE PRIME NUMBERS\n");
    for(i=a;i<=b;i++)
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
}
