#include<stdio.h>
int main()
{
    const double pi = 3.14;
    double radius,area,perimeter;
    
    printf("Enter the Radius of circle: ");
    scanf("%lf",&radius);
    area = pi*(radius*radius);
    perimeter = 2*pi*radius;

    printf("Area: %.4lf\nRadius: %.4lf\nCircumference: %.4lf", area, radius, perimeter);
    return 0;
}
