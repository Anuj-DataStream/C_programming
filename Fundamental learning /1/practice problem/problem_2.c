// calculate the area of a circle and modifying same program to calculate the volume of a cylinder by taking radius and height

#include <stdio.h>

int main()
{
    float radius, height, area, volume;

    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;

    printf("The area of the circle is: %f\n", area);

    printf("Enter the height of the cylinder:");
    scanf("%f", &height);
    volume = area * height;

    printf("The volume of the cylinder is: %f\n", volume);
    
    return 0;
}