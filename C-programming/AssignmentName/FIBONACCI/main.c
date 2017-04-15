#include <stdio.h>

int main(int argc, char *argv[])
{
    int t1,t2,nextterm,n;
    t1=0;
    t2=1;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("fibonacci series= %d,%d\n",nextterm=t1+t2);
    while(nextterm<=n)
    {
        printf("%d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }

    return 0;
}
