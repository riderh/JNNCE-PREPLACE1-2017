#include <stdio.h>

int main()
{
    int age;
    while(1)
    {
    printf("Enter Age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Eligible to Vote\n\n");
    }
    else
    {
         printf("Not Eligible to Vote\n");
    }
    }
    return 0;
}

