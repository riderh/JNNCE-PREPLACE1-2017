#include <stdio.h>

int main()
{
   int num;
while(1)
{
    printf("please enter your percentage: \n");
    scanf("%d",&num);

    if(num<=100&&num>=70)
    {
      printf("your passed with Distinction\n "
               "congrats \n");
         }

    else if(num<70&&num>=60)
    {
      printf("your passed with Frist class\n "
               "good,try to get Distinction \n");

    }

  else  if(num<60&&num>=45)
    {
      printf("your passed with second class\n "
               "work hard \n");
         }
    else  if(num<45&&num>=00)
      {
        printf("your failed\n "
                 "Meet The Principal with your parents \n");
}
}
    return 0;

}
