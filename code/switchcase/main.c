0#include <stdio.h>

#include<math.h>

void main()
{
    int num1;
    int num2;
    int sum,dif,product,rem;
    char op;

    printf("enter the first number\n");
    scanf("%d",&num1);

    printf("Enter the second number\n");
    scanf("%d",&num2);

    printf("enter the code for operation\n");
    scanf("%c",&op);

    switch(op)
    {
    case 'a': sum=num1+num2;
        printf("The sum is= ");
        printf("%d",sum);

    case 's': dif=(num1-num2);
        printf("The differnce is");
        printf("%d",dif);

    case'm':  product= num1*num2;
        printf("the product is\n");
        printf("%d",product);

    case 'd':  rem=(num1/num2);
        printf("the remainser is\n");
        printf("%d",rem);
    }
}
