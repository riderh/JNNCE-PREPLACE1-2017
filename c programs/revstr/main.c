#include <stdio.h>

int main()
{
    char str[20], rev[20];
    int i=0,j=0;
    printf("enter the string\n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        rev[j]=str[i];
        j++;
        i--;
    }
    rev[j]='\0';
    printf("reversed string is\n %s",rev);


    return 0;
}
