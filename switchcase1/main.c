#include <stdio.h>
#include<stdlib.h>

int main()
{
    float a,b,s;
    char ch;

    printf("enter the numbers\n");
    scanf("%f%f",&a,&b);
    printf(" operations::1.a for addition 2.s for subtraction 3.m for multiplication 4.d for division \n ");
        scanf("%s",&ch);
            switch((ch))
            {
         case 'a': s=a+b;
                  break;
        case 's': s=a-b;
                  break;
        case 'm': s=a*b;
                  break;
         case 'd': if(b!=0){
                   s=a/b;
                   break;}
                   else{
                    printf("Divisor can not be zero\n");
                  exit(0);}
         default:printf("invalid operation\n");
                    exit(0);
    }
    printf("the result is%f",s);
    return 0;
}
