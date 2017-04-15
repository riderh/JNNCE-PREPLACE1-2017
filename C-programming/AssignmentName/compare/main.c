#include <stdio.h>

int main(int argc, char *argv[])
{
    int x,y;
    printf("enter the two numbers\n");
    scanf("%d%d",&x,&y);
    if(x==y)
        printf("x is equal to y");
    else
        if(x>y)
            printf("x is greater than y\n");
    else
            printf("x is less than y\n");
    return 0;
}
