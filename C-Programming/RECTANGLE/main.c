#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
    float length , width , area , perimeter , diagonal ;

    printf("Enter The Length of the Rectangle:\n");
    scanf("%f",&length);

    printf("Enter The Width of the Rectangle:\n");
    scanf("%f",&width);

    area = length * width ;
    printf("\n Area Of a Rectangle: %0.4f \n\n", area);

    perimeter = 2 * (length + width);
    printf(" Perimeter Of a Rectangle: %0.4f \n\n", perimeter);

    diagonal = sqrt(length*length+width*width);
    printf(" Length of Diagonal Of a Rectangle: %0.4f\n", diagonal);

    getch();
    return 0;
}
