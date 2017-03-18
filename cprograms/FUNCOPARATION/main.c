#include <stdio.h>
#include<stdlib.h>
#include "version1.h"
#include "version2.h"
int a,b,c,d;
int main()
{
    int n,n1,n2;
    for(;;)
    {
    printf("CHOOSE ONE PROGRAM 1>>INTIGER PROGRAM\n2>>FLOAT PROGRAM\n");
    scanf("%d",&n);
    switch(n)
   {
    case 1:{
    printf("ENTER THE  TWO INTIGER  NUMBERS  \n");
    scanf("%d%d",&a,&b);
    printf("CHOOSE OPERATION TO PERFORM ON THESE NUMBERS\n");
    printf("1>>ADDITION\n2>>SUBTRACTION\n3>>MULTIPLICATION\n4>>DIVISION\n5>>GENERATE PRIMENUMBERS\n0>>EXIT\n");
    scanf("%d",&n1);
    switch (n1)
    {
    case 0 : exit(0);
     case 1:addint();
           break;
    case 2: subint();
             break;
     case 3:   multiint();
               break;
     case 4: divideint();
             break;
     case 5:if (a<b){
        primeint();
        break;}
        else
        {
            printf("INVAILD RANGE\n");
            break ;
        }
    default:printf("INVALID CHOICE\n");
           break;

    }}
   case 2: printf("ENTER THE TWO FLOAT  NUMBERS  \n");
        scanf("%d%d",&c,&d);
        printf("CHOOSE OPERATION TO PERFORM ON THESE NUMBERS\n");
        printf("1>>ADDITION\n2>>SUBTRACTION\n3>>MULTIPLICATION\n4>>DIVISION\n5>>GENERATE PRIMENUMBERS\n0>>EXIT\n");
        scanf("%d",&n2);
        switch (n2)
        {
        case 0 : exit(0);
         case 1:addflt();
               break;
        case 2: subflt();
                 break;
         case 3:   multiflt();
                   break;
         case 4: divideflt();
                 break;
         case 5:if (c<d){
            primeflt();
            break;}
            else
            {
                printf("INVAILD RANGE\n");
                break ;
            }
        default:printf("INVALID CHOICE\n");
               break;

        }}




    }
    return 0;
}

