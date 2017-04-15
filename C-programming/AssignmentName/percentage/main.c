#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char grade;
    char stu[10];
    printf("enter the name of student\n");
    scanf("%s",&stu);
    printf("enter the range of marks\n");
    scanf("%d",&i);
    printf("enter the grade of a student\n");
    scanf("%c",&grade);
    if(i>70)
     printf("distinction\n");
    else
            if(i>60)
            printf("first class\n");
            else
            if(i>50)
            printf("second class\n");
            else
            printf("failed\n");

    return 0;
}
