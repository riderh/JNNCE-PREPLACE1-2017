#include<stdio.h>
int main()
{
    int num1,num2;
    num1=0;
    num2=0;

    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);

    printf("Before swapping num1=%d and num2=%d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping num1=%d and num2=%d\n",num1,num2);
    return 0;

}
