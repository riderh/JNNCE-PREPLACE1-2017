#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("\nINTEGER DATA TYPE\n");
    printf("\nNumber of Bytes Occupied By Integer Data type in Memory is:%d\n\n",sizeof(int));
    printf("Minimum Value it can take:%d\n\n",INT_MIN);
    printf("Maximum Value it can Take:%d\n",INT_MAX);

    printf("\nThe Number of Bytes Occupied by Unsigned int type in memory is:2 or 4 bytes\n\n");
    printf("the minimum value it can take is: 0 to 65535\n\n");
    printf("The maximum value it can take is: 0 t0 4,294,967,295\n\n");

    printf("\nThe Number of Bytes Occupied by Unsigned short int type in memory is:2 bytes\n\n");
    printf("the minimum value it can take is: 0\n\n");
    printf("The maximum value it can take is: 65535\n\n");

    printf("\nThe Number of Bytes Occupied by short int type in memory is:2 bytes\n\n");
    printf("the minimum value it can take is: -32,768\n\n");
    printf("The maximum value it can take is: +32,767\n\n");

    printf("\nThe Number of Bytes Occupied by long int type in memory is:4 bytes\n\n");
    printf("the minimum value it can take is:-2,147,483,648\n\n");
    printf("The maximum value it can take is:+2,147,483,647\n\n");

    printf("\nThe Number of Bytes Occupied by Unsigned long int type in memory is:4 bytes\n\n");
    printf("the minimum value it can take is: 0\n\n");
    printf("The maximum value it can take is: 4,294,967,295\n\n");

    printf("\n\nFLOAT DATA TYPE\n\n");

    printf("\nNumber of Bytes Occupied By Float Data type in Memory is:%d\n\n",sizeof(float));
    printf("Minimum Value it can take:%e\n\n",FLT_MIN);
    printf("Maximum Value it can Take:%e\n\n",FLT_MAX);

    printf("\nThe Number of Bytes Occupied by float Double type in memory is:8 bytes\n\n");
    printf("the minimum value it can take is:2.3E-308\n\n");
    printf("The maximum value it can take is:1.7E+308\n\n");

    printf("\nThe Number of Bytes Occupied by Float Long Double type in memory is:10 bytes\n\n");
    printf("the minimum value it can take is:3.4E-4932\n\n");
    printf("The maximum value it can take is:1.1E+4932\n\n");

    printf("\n\n CHARACTER DATA TYPE\n\n");

    printf("\nNumber of Bytes Occupied By Character Data type in Memory is:%d\n\n",sizeof(char));
    printf("Minimum Value it can take:%d\n\n",CHAR_MIN);
    printf("Maximum Value it can Take:%d\n\n",CHAR_MAX);

    printf("\nThe Number of Bytes Occupied by Unsigned char type in memory is: 1 bytes\n\n");
    printf("the minimum value it can take is: 0\n\n");
    printf("The maximum value it can take is: 255\n\n");

    printf("\nThe Number of Bytes Occupied by signed Char type in memory is:1 bytes\n\n");
    printf("the minimum value it can take is:-128\n\n");
    printf("The maximum value it can take is:127\n\n");
    return 0;
}
