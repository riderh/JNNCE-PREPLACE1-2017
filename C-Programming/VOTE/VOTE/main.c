#include <stdio.h>

int main()
{
  int age=0;

  printf("Enter the age:\n");
  scanf("%d",&age);

  if(age>=18)
  {
      printf("Eligible to VOTE\n");
  }
  else
  {
      printf("Not Eligible to VOTE\n");
  }


    return 0;
}
