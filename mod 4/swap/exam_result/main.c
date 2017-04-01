#include <stdio.h>

int main(int argc, char *argv[])
{
    float pr;
    printf("enter the percentage\n");
    scanf("%f",&pr);
    printf("result is   \n");
    if(pr>=85)printf("distintion\n");
    else if(pr>=60)printf("first class\n");
    else if(pr>=50)printf("second class\n");
    else if(pr>=35)printf("pass\n");
    else printf("fail\n");
    return 0;
}
