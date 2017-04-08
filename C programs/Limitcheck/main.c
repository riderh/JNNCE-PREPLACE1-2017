#include<stdio.h>
#include<limits.h>
int main()
{
//Memory Allocation
printf("THE INT OCCUPIES %ld BYTES MEMORY\n",sizeof(int));
printf("THE SHORT OCCUPIES %ld BYTES MEMORY\n",sizeof(short));
printf("THE LONG OCCUPIES %ld BYTES MEMORY\n",sizeof(long));
printf("THE UNSIGNED INT OCCUPIES %ld BYTES MEMORY\n",sizeof(unsigned int));
printf("THE UNSIGNED SHORT OCCUPIES %ld BYTES MEMORY\n",sizeof(unsigned short));
printf("THE  UNSIGNED LONG OCCUPIES %ld BYTES MEMORY\n",sizeof(unsigned long));
printf("THE SIGNED INT OCCUPIES %ld BYTES MEMORY\n",sizeof(signed int));
printf("THE CHAR OCCUPIES %ld BYTES MEMORY\n",sizeof(char));
printf("THE UNSIGNED CHAR OCCUPIES %ld BYTES MEMORY\n",sizeof(unsigned char));
printf("THE SIGNED CHAR OCCUPIES %ld BYTES MEMORY\n",sizeof(signed char));
printf("THE FLOAT OCCUPIES %ld BYTES MEMORY\n",sizeof(float));
printf("THE LONG DOUBLE OCCUPIES %ld BYTES MEMORY\n",sizeof(long double));
printf("THE DOUBLE OCCUPIES %ld BYTES MEMORY\n",sizeof( double));


//Maximum and Minimum values
printf("FOR INT:MINIMUM VALUE=%d AND MAXIMUM VALUE=%d  \n",INT_MIN,INT_MAX);
printf("FOR SHORT:MINIMUM VALUE=%d AND MAXIMUM VALUE=%d  \n",SHRT_MIN,SHRT_MAX);
printf("FOR LONG:MINIMUM VALUE=%ld AND MAXIMUM VALUE=%ld  \n",LONG_MIN,LONG_MAX);
printf("FOR UNSIGNED INT: MAXIMUM VALUE=%d  \n",UINT_MAX);
printf("FOR UNSIGNED SHORT: MAXIMUM VALUE=%d  \n",USHRT_MAX);
printf("FOR UNSIGNED LONG: MAXIMUM VALUE=%ld  \n",ULONG_MAX);
printf("FOR CHAR:MINIMUM VALUE=%d AND MAXIMUM VALUE=%d  \n",CHAR_MIN,CHAR_MAX);
printf("FOR UNSIGNED CHAR: MAXIMUM VALUE=%d  \n",UCHAR_MAX);
printf("FOR SIGNED CHAR:MINIMUM VALUE=%d AND MAXIMUM VALUE=%d  \n",CHAR_MIN,CHAR_MAX);

return 0;
}

