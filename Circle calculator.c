#include <stdio.h>

int main()

{
    float r, circumference, area;
    const float pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    
    circumference = 2*pi*r;
    area = pi*r*r;

    printf("\nPerimeter of the circle = %.2f",circumference);
    printf("\nArea of the Circle = %.2f\n",area);
    
    
    return 0;
}