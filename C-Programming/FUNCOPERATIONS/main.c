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
    printf("  ENTER \n1 For INTIGER PROGRAM\n2 for FLOAT PROGRAM\n");
    scanf("%d",&n);
    switch(n)
   {
    case 1:{
    printf("Enter Two Integer Numbers\n");
    scanf("%d%d",&a,&b);
    printf("\nSelect the Operation To Be Performed on These Numbers\n");
    printf("\nSELECT\n\n1 For ADDITION\n2 For SUBTRACTION\n3 For MULTIPLICATION\n4 For DIVISION\n5 For GENERATE PRIMENUMBERS\n0 For EXIT\n");
    scanf("%d",&n1);
    switch (n1)
    {
    case 0 :
        exit(0);
     case 1:addint();
           break;

    case 2: subint();
             break;

     case 3:   multiint();
               break;
     case 4: divideint();
             break;

     case 5:if (a<b)
        {
        primeint();
        break;
        }
        else
        {
            printf("\nERROR-MISSED RANGE!\n\n");//INVALID RANGE
            break ;
        }
    default:printf("\nERROR-WRONG CHOICE!\n\n");//INVALID CHOICE
           break;

    }
    }
   case 2: printf("Enter The Two Float Numbers\n");
        scanf("%f%f",&c,&d);
        printf("\nSelect Operation to be Performed on these numbers\n");
        printf("\nSELECT\n\n1 For ADDITION\n2 For SUBTRACTION\n3 For MULTIPLICATION\n4 For DIVISION\n5 For GENERATE PRIME NUMBERS\n0 For EXIT\n");
        scanf("%d",&n2);
        switch (n2)
        {
        case 0 :
            exit(0);

         case 1:addflt();
               break;

        case 2: subflt();
                 break;

         case 3:   multiflt();
                   break;

         case 4: divideflt();
                 break;

         case 5:if (c<d)
            {
            primeflt();
            break;
            }
            else
            {
                printf("\nERROR-MISSED RANGE!\n\n");//INVALID RANGE
                break ;
            }
        default:
            printf("\nERROR-WRONG CHOICE!\n\n");//INVALID CHOICE
               break;

        }
    }
   }
    return 0;
}
