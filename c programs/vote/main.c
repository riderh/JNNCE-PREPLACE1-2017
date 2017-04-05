#include <stdio.h>
int main()
{
     int a;
     printf("ENTER YOUR AGE\n");
     scanf("%d",&a);
     if(a>=18)
         printf("ELIGIBLE TO VOTE\n");
     else
         printf("NOT ELIGIBLE TO VOTE\n");
     return 0;
}
