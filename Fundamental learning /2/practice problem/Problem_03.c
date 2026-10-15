// write a program to check whether a number is divisble by 97 or not.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("the value of num%97 is %d\n", num%97);
    return 0;
}