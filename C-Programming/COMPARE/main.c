#include <stdio.h>

int main()
{
    int x,y;
    while(1)
    {
    printf("Enter the Value Of X:");
    scanf("%d",&x);

    printf("Enter the Value Of Y:");
    scanf("%d",&y);

    if(x==y)
    {
        printf("\nX is equal to Y\n\n");
    }
    else
        if(x>y)
        {
            printf("\nX is Greater than Y\n\n");
        }
    else
    {
      printf("\nX is Smaller than Y\n\n");
        }
    }

    return 0;
}
