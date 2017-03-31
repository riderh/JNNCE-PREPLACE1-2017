#include <stdio.h>
#include<conio.h>

int main()
{
    int a;
    int b;
    int result1;
    int result2;

    printf("\nEnter The Values of A and B:\n");
    scanf("%d%d", &a,&b);

    result1=a*a+b*b+2*a*b;

    result2=a*a+b*b-2*a*b;

    printf("\nThe Result of (a+b)2=a2+b2+2ab for the Given input is=%d",result1);

    printf("\nThe Result of (a-b)2=a2+b2-2ab for the Given input is=%d\n",result2);
    return 0;
}
