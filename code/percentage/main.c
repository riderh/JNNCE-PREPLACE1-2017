#include <stdio.h>

void main()
{
    float per;
  printf("Enter the  percentage of the student\n");
  scanf("%f",&per);

  if(per>=70)
  {
      printf("you have scored distinction!!\n");
  }
  else if(per>=60)
  {
      printf("first class!!\n");

  }
  else if(per>=50)
  {
      printf("Second class\n");
  }

 else
  {
      printf("FAIL\n");
  }
}
