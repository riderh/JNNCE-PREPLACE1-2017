#include<stdio.h>
#include<limits.h>
int main()
{

     printf("The int occupies %ld bytes memory\n",sizeof(int));
     printf("The short occupies %ld bytes memory\n",sizeof(short));
     printf("The long occupies %ld bytes memory\n",sizeof(long));
     printf("The unsigned int occupies %ld bytes memory\n",sizeof(unsigned int));
     printf("The unsigned short occupies %ld bytes memory\n",sizeof(unsigned short));
     printf("The unsigned long occupies %ld bytes memory\n",sizeof(unsigned long));
     printf("The signed int occupies %ld bytes memory\n",sizeof(signed int));
     printf("The char occupies %ld bytes memory\n",sizeof(char));
     printf("The unsigned char occupies %ld bytes memory\n",sizeof(unsigned char));
     printf("The signed char occupies %ld bytes memory\n",sizeof(signed char));
     printf("The float occupies %ld bytes memory\n",sizeof(float));
     printf("The double occupies %ld bytes memory\n",sizeof(double));
     printf("The long double occupies %ld bytes memory\n",sizeof(long double));


     printf("For INT:MIN VALUE=%d and MAXIMUM VALUE=%d\n",INT_MIN,INT_MAX);
     printf("For SHORT:MIN VALUE=%d and MAXIMUM VALUE=%d\n",SHRT_MIN,SHRT_MAX);
     printf("For LONG:MIN VALUE=%ld and MAXIMUM VALUE=%ld\n",LONG_MIN,LONG_MAX);
     printf("For UNSIGNED INT: MAXIMUM VALUE=%d\n",UINT_MAX);
     printf("For UNSIGNED SHORT: MAXIMUM VALUE=%d\n",USHRT_MAX);
     printf("For UNSIGNED LONG: MAXIMUM VALUE=%ld\n",ULONG_MAX);
     printf("For CHAR:MIN VALUE=%d and MAXIMUM VALUE=%d\n",UCHAR_MAX);
     printf("For UNSIGNED CHAR: MAXIMUM VALUE=%d\n",UCHAR_MAX);
     return 0;
}
