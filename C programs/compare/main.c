#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("number1 is greater than number2\n");
    else if(num1<num2)
        printf("number1 is lesser than number2\n");
    else
        printf("number1 is equal to number2\n");

    return 0;
}
