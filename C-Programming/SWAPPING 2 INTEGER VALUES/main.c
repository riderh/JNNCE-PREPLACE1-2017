#include <stdio.h>
int main()
{
   int x = 10,y = 5;

   // code to swap 'x' and 'y'

   x = x + y ; // x now becomes 15
   y = x - y ; // y becomes 10
   x = x - y ; // x becomes 5

   printf("Before Swapping: X = 10 , Y = 5\n\n");
    printf("After Swapping: X = %d , Y = %d\n\n",x,y);

    return 0;
}
