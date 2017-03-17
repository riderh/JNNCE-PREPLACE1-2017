#include <stdio.h>

int main()
{
    int counter,x;
    printf("Enter The Value of X:");
    scanf("%d",&x);
    printf("\nODD Numbers Between 1 to X are:\n");
    counter=1; //make counter=0; for even numbers
    while(counter<=x)
    {
        printf("%d\n",counter);
        counter=counter+2;
    }
    return 0;
}
