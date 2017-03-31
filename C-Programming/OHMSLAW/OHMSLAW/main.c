#include <stdio.h>

int main()
{
  float voltage;
  float resistance;
  float current;

  printf("enter the resistance:\n");
  scanf("%f",&resistance);
  printf("enter the current:\n");
  scanf("%f",&current);

  voltage=(resistance*current);

  printf("calculated voltage is %f",voltage);

    return 0;
}
