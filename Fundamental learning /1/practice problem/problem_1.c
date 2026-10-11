// write a c program to calculate area of rectangle by taking length and width from user.

#include <stdio.h>  

int main() {
    float length, width, area;

    printf("Enter the length:");
    scanf("%f", &length);
    printf("Enter the width:");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is: %f", area);
    return 0;
}