#include <stdio.h>

int main(int argc, char *argv[])
{
  int limit;
  int i;

  printf("enter the limit:\n");
  scanf("%d",&limit);
  for(i=0;i<=limit;i++)
{
  if((i%2==0))
  {
      continue;
  }
  printf("%d\n",i);
  }
  return 0;
}
