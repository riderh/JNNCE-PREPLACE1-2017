#include <stdio.h>

int main()
{
    int num;
    int i;


    printf("enter the value for x\n");
    scanf("%d",&num);


            for(i=0;i<=num;i++)
    {

        if((i%2)==0)
        {
            continue;

        }
            printf("the odd numbers are %d\n",i);
    }



    return 0;
}
