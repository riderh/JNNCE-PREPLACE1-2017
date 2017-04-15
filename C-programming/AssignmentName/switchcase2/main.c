#include <stdio.h>
int main()
{
    int x,y;
    int sum,diff,product,division;
    char op;
   printf("enter the value for x and y\n");
   scanf("%d%d",&x,&y);
   printf("enter the operator");
   scanf("%s",&op);
   switch(op)
   {
   case 'a':
       sum=(x+y);
       printf("sum=%d\n",sum);
       break;
   case 's':
      diff=(x-y);
       printf("diff=%d\n",diff);
       break;
    case 'm':
       product=(x*y);
       printf("product=%d\n",product);
       break;
     case 'd':
       division=(x/y);
       printf("division=%d\n",division);
       break;
     default:
       printf("invalid entry\n");


}
    return 0;

}
