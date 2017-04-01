#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    printf("enter the age");
    scanf("%d",&a);

    if(a>=18)printf("Eligible to vote");
    else printf("NOT Eligible to vote");
    return 0;
}
