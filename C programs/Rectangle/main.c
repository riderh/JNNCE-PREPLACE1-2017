#include<stdio.h>
int main()
{
    float length,breadth;
    double area,perimeter,diag_length;

    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f %f",&length,&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);
    diag_length=sqrt((pow(length,2.0))+(pow(breadth,2.0)));

    printf("%f\n%f\n%f\n",area,perimeter,diag_length);
    return 0;

}
