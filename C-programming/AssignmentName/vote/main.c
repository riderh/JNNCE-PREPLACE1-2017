#include <stdio.h>

int main(int argc, char *argv[])
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    if(age>=18)
        printf("elligible to vote\n");
    else
        printf("not elligible to vote\n");
    return 0;
}
