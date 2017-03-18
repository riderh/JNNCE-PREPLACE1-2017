#include <stdio.h>
#include<stdlib.h>

int main()
{
    float a,b,r;
    char ch;

    printf("ENTER TWO NUMBERS\n");
    scanf("%f%f",&a,&b);
    printf(" ENETER OPERATAION::1.a for addition 2.s for subtraction 3.m for multiplication 4.d for division \n ");
        scanf("%s",&ch);
            switch((ch))
            {
         case 'a': r=a+b;
                  break;
        case 's': r=a-b;
                  break;
        case 'm': r=a*b;
                  break;
         case 'd': if(b!=0){
                   r=a/b;
                   break;}
                   else{
                    printf("Divisor can not be zero\n");
                  exit(0);}
         default:printf("INVALID OPERATION\n");
                    exit(0);
    }
    printf("THE RESULT IS %f",r);
    return 0;
}
