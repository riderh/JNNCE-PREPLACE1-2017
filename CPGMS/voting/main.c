#include<stdio.h>
int main()
{
    int x;
    printf("PLEASE ENTER YOUR AGE\n");
    scanf("%d",&x);
    if(x>=18)
        printf("ELIGIBLE TO VOTE\n");
    else
        printf("NOT ELIGIBLE TO VOTE\n");
    return 0;
}

