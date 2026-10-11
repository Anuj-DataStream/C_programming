// write a program to calculate the simple interest for a set of values representing principal,number of years and rate of interest

#include <stdio.h>

int main() {
    
    float principal, rate, simple_interest;
    int years;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    simple_interest = (principal * rate * years)/100;

    printf("The simple interest is : %f\n", simple_interest);
    
    return 0;
    
}