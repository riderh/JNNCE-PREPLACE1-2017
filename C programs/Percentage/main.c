#include<stdio.h>
int main()
{
    float P;
    printf("Enter your percentage\n");
    scanf("%f",&P);

    if(P>=70)
        printf("Distinction\n");
    else if(P>=60)
        printf("First Class\n");
    else if(P>=50)
        printf("Second Class\n");
    else if(P>=35)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;

}
