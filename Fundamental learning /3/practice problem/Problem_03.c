/*
calculate income tax paid by an employee to the government as per the slabs mentioned below:

Income slab      Tax
2.5-5.0L         5%
5.0-10.0L        20%
Above10.0L       30%

Note: There is no tax for income below 2.5L. Take the income amount as input from the user.

*/

#include <stdio.h>
int main() {
    float income;
    printf("Enter your annual income in lakhs: ");
    scanf("%f", &income);

    if(income <= 2.5){
        printf("No tax is applicable for income up to 2.5 lakhs.\n");
    }
    else if(income <= 5.0 && income > 2.5){
        float tax = (income - 2.5) * 0.05;
        printf("Your tax is: %f lakhs\n", tax);
    }
    else if(income <= 10.0 && income > 5.0){
        float tax = (2.5 * 0.05) + ((income - 5.0) * 0.20);
        printf("Your tax is: %f lakhs\n", tax);
    }
    else if(income > 10.0){
        float tax = (2.5 * 0.05) + (5.0 * 0.20) + ((income - 10.0) * 0.30);
        printf("Your tax is: %f lakhs\n", tax);
    }
    return 0;
}