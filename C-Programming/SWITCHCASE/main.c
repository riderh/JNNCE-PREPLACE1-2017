#include <stdio.h>

int main()
{
   char operation;
   float x,y;
       printf("Enter an Operation(a,s,m,d):");
       scanf("%c",&operation);

       printf("\nEnter first Number:");
       scanf("%f",&x);

       printf("\nEnter second Number:");
        scanf("%f",&y);

       switch(operation)
       {
       case'a':
           printf("\n%.1f+%.1f=%.1f\n\n",x,y,x+y);
           break;

       case's':
           printf("\n%.1f-%.1f=%.1f\n\n",x,y,x-y);
           break;

        case'm':
           printf("\n%.1f*%.1f=%.1f\n\n",x,y,x*y);
           break;

       case'd':
           printf("\n%.1f/%.1f=%.1f\n\n",x,y,x/y);
           break;

           //if operation does not match any case. then

       default:
           printf("Error! Operation is not Correct.\n\n");
}
    return 0;
}
