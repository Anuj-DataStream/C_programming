// write a program to find whether a year entered by the buser is leap year or not. take year as a input from the user.
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
    return 0;
}