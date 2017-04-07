#include <stdio.h>

int main()
{
    int num1;
    int num2;
    while(1){


    printf("Enter the number 1\n");
    scanf("%d",&num1);
    printf("Enter the number 2\n");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("number 1 %d greater than the number 2 %d\n",num1,num2);
    }
   else if (num1<num2)
    {
        printf("number 1 %d lesser than the number 2 %d\n",num1,num2);
    }

   else if (num1==num2)
    {
        printf("number 1 %d is equal to number 2 %d\n",num1,num2);
    }

    else
    {
        printf("enter the valid numbers \n");
    }
    }
    return 0;
}
