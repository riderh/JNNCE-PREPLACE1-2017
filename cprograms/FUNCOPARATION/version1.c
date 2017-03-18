#include <stdio.h>
#include "version1.h"
extern int a,b;
void addint()
{
    int r=0;
   r= a+b;
    printf("ADDITION RESULT=%d\n",r);
    return;
}
void subint()
{
    int r=0;
    r=a-b;
    printf("SUBTRACTION IS =%d\n",r);
    return;
}
void multiint()
{
    int r=0;
    r=a*b;
    printf("THE RESULTS OF MULTIPLICATION=%d\n",r);
    return;
}
void divideint()
{
    int r=0;
    if(b!=0)

{
        printf("%d",r);
        r= a / b;
    printf("THE RESULT OF DIVISION=%d\n",r);
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
