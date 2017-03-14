#include <stdio.h>

int main()
{
    float percentage;
    while(1)
    {
       printf("Enter The Percentage:");
       scanf("%f",&percentage);

       if(percentage>=75&&percentage<=100)
           printf("\nYou are Distinction\n\n");

       else if(percentage>=60&&percentage<=75)
           printf("\nYou are First Class\n\n");

       else if(percentage>=35&&percentage<=60)
           printf("\nYou are Second Class\n\n");

       else

           printf("\nYou are Fail\n\n");
    }
    return 0;
}
