#include<stdio.h>
#include<conio.h>

int main()
{
    char operator;
    int num1,num2;

    printf("Enter two numbers as operands\n");
    scanf("%d%d", &num1, &num2);
    printf("Enter an arithemetic operator(a,s,m,d)\n");
    scanf("%s",&operator);

    switch(operator)
    {
        case 'a':
                printf("%d\n",num1+num2);
                break;
        case 's':
                printf("%d\n", num1-num2);
                break;
        case 'm':
                printf("%d\n", num1*num2);
                break;
        case 'd':
                printf("%d\n", num1/num2);
                break;
        default:
                printf("ERROR: Unsupported Operation\n");
    }


    return 0;
}
