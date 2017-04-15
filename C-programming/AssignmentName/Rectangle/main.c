#include <stdio.h>

int main(int argc, char *argv[])
{
    int l,b;
    int area,perimeter,diagonal;
    printf("enter the length\n");
    scanf("%d",&l);
    printf("enter the breadth\n");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    diagonal=sqrt((l*l)+(b*b));
    printf("area=%d\n",area);
    printf("perimeter=%d\n",perimeter);
    printf("diagonal=%d\n",diagonal);
    return 0;
}
