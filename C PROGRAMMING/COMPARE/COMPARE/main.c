#include <stdio.h>

int main(int argc, char *argv[])
{
    float x,y;
    printf("enter the two numbers\n");
    scanf("%f%f",&x,&y);
    if(x>y)
    {
        printf("x is greater than y\n");
    }
    else if(x<y)
    {
      printf("x is lesser than y\n");
    }
    else
    {
       printf("x is equal to y\n");
    }
    return 0;
}
