#include <stdio.h>
int main()
{
    int x;
    printf("please enter your age\n");
    scanf("%d",&x);
    if(x>=18)
        printf("eligible to vote\n");
    else
        printf("not eligible to vote\n");

  return 0;
}
