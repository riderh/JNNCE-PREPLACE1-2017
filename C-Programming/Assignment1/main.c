#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("Number of Bytes Occupied By Integer Data type in Memory is:%d\n\n",sizeof(int));
    printf("Minimum Value it can take:%d\n\n",INT_MIN);
    printf("Maximum Value it can Take:%d\n",INT_MAX);
    printf("\n\n\n");

    printf("Number of Bytes Occupied By Float Data type in Memory is:%d\n\n",sizeof(float));
    printf("Minimum Value it can take:%e\n\n",FLT_MIN);
    printf("Maximum Value it can Take:%e\n\n",FLT_MAX);
    printf("\n\n\n");

    printf("Number of Bytes Occupied By Character Data type in Memory is:%d\n\n",sizeof(char));
    printf("Minimum Value it can take:%d\n\n",CHAR_MIN);
    printf("Maximum Value it can Take:%d\n\n",CHAR_MAX);

    return 0;
}
