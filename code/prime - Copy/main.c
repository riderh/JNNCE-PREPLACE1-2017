#include <stdio.h>

void main()
{
    int i,j,flag,limit;
    printf("Enter the limit\n");
    scanf("%d",&limit);

    printf("The numbers are:\n");
    for (i=2;i<=limit;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            break;
        }
        }

        if(flag==0)
        {
            printf("%d\t",i);

        }

    }
}
