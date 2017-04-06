#include <stdio.h>
#include <limits.h>
#include<float.h>

int main()
{



printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);

printf("The maximum value of UNSIGNED CHAR = %ud\n", UCHAR_MAX);

printf("The maximum value of CHAR = %d\n", CHAR_MAX);
printf("The minimum value of CHAR = %d\n", CHAR_MIN);

printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);

printf("The minimum value of INT = %d\n", INT_MIN);
printf("The maximum value of INT = %d\n", INT_MAX);

printf("The maximum value of UNSIGNED INT = %ud\n", UINT_MAX);
printf("The maximum value of UNSIGNED SHORT INT = %ud\n", USHRT_MAX);
printf("The maximum value of UNSIGNED LONG INT = %ud\n", ULONG_MAX);

printf("The minimum value of LONG = %ld\n", LONG_MIN);
 printf("The maximum value of LONG = %ld\n", LONG_MAX);

 printf("The maximum value of  FLOAT MAX = %10e\n", FLT_MAX);
 printf("The minimum value of  FLOAT MIN = %10e\n", FLT_MIN);

 printf("The maximum value of  DOUBLE FLOAT MAX= %10e\n", DBL_MAX);
 printf("The minimum value of  DOUBLE FLOAT MIN= %10e\n", DBL_MIN);

 printf("The maximum value of LONG FLOAT MAX= %10e\n", LDBL_MAX);
 printf("The minimum value of  FLOAT MIN= %10e\n", LDBL_MIN);

 printf("The value of  UNSIGNED FLOAT = %10e\n", FLT_MAX_10_EXP);

printf("The value of UNSIGNED DOUBLE FLOAT = %10e\n", DBL_MAX_10_EXP);

 printf("The value of UNSIGNED  LONG FLOAT = %10e\n", LDBL_MAX_10_EXP);
   return(0);
}
