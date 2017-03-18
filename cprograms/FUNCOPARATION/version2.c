
#include <stdio.h>
#include "version2.h"
extern int c,d;
void addflt()
{
    float r=0;
   r= c+d;
    printf("ADDITION RESULT=%f\n",r);
    return;
}
void subflt()
{
    float r=0;
    r=c-d;
    printf("SUBTRACTION IS =%f\n",r);
    return;
}
void multiflt()
{
    float r=0;
    r=c*d;
    printf("THE RESULTS OF MULTIPLICATION=%f\n",r);
    return;
}
void divideflt()
{
    float r=0;
    if(d!=0)

  {

        r= c / d;
    printf("THE RESULT OF DIVISION=%f\n",r);
 }
 else if(d==0)
        printf("ERROR:DIVIOSOR CAN NOT BE ZERO\n");
    return;
}
void primeflt()
{
    int i,j,f;
    printf("THE PRIME NUMBERS\n");
    for(i=c;i<=d;i++)
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
