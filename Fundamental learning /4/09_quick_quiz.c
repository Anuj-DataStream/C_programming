// write a program to print first 'n' natural numbers using for loop
#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF NATURAL YOU WANT :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("The natural number is : %d\n",i);
    }
    return 0;
}