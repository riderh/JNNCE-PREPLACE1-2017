#include <stdio.h>
#include<conio.h>

int main()
{
    char str[50];
    char rev[50];
    int i=0;
    int j=0;

    printf("\n Enter The String To be Reversed:\n");
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

    printf("\nReverse of String Is:%s\n",rev);
    return 0;
}
