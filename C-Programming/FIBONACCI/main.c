#include <stdio.h>

int main()
{
    int i,x,a=0,b=1,c=0;// c acts as next term

    printf("Enter the Number of terms(X):");
    scanf("%d",&x);

    printf("\nFIBONACCI SERIES IS:\n");

    for(i=1;i<=x;++i)
    {
        if(i==1)
        {
            printf("%d,",a);
            continue;
        }
        if(i==2)
        {
            printf("%d,",b);
            continue;
        }
            c=a+b;
            a=b;
            b=c;
            printf("%d,",c);
            printf("\n");
        }
    return 0;
}
