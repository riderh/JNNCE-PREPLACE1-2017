#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("enter the number 1: \n");
    scanf("%d",&num1);
    printf("enter the number 2: \n");
    scanf("%d",&num2);
   num1 += num2;
   num2 =num1-num2;
   num1 -= num2;

     printf("the value  number 1: %d\n",num1);
      printf(" the value number 2: %d\n",num2);
    return 0;
}

