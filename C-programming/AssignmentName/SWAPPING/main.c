#include <stdio.h>

int main(int argc, char *argv[])
{
    int x,y;
    printf("Enter the two numbers x and y\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d\ny=%d\n",x,y);
    return 0;
}
