#include <stdio.h>
int main()
{
    char str[40], revstr[40];
    int i=0,j=0;
    printf("ENTER THE STRING\n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        revstr[j]=str[i];
        j++;
        i--;
    }
    revstr[j]='\0';
    printf("THE REVERSED STRING IS\n");
    printf("%s\n",revstr);


    return 0;
}
