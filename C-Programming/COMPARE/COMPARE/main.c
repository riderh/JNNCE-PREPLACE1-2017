#include <stdio.h>

int main(int argc, char *argv[])
{
    float x;
    float y;

    printf("Enter the two numers:\n");
    scanf("%f%f",&x,&y);

    if(x>y)
    {
        printf("x is greater than y\n");
    }
    else if(x==y)
    {
        printf("x is equal to y\n");
    }
    else
     {
        printf("x less than y\n");
    }

    return 0;
}
