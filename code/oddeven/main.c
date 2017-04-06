#include <stdio.h>

void main()
{
    int limit;
    int i;
    int rem;

    printf("Enter the upper limit\n");
    scanf("%d",&limit);

    for(i=0;i<=limit;i++)
    {
        rem=(i%2);
        if(rem!=0)
        {
            printf("%d\n",i);
        }
    }
}
