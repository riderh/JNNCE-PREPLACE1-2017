#include <stdio.h>
#include "version2.h"
extern float c,d;
void addflt()
{
    float z=0;
   z= c+d;
    printf("ADDITION RESULT=%0.2f\n",z);
    return;
}
void subflt()
{
    float z=0;
    z= c-d;
    printf("SUBTRACTION IS =%0.2f\n",z);
    return;
}
void multiflt()
{
    float z=0;
    z=c*d;
    printf("THE RESULTS OF MULTIPLICATION=%0.2f\n",z);
    return;
}
void divideflt()
{
    float z=0;
    if(d!=0)

  {

        z= c / d;
    printf("THE RESULT OF DIVISION=%0.2f\n",z);
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
