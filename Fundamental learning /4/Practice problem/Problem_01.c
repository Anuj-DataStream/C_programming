// write a program to print multiplication table of given number n.
#include<stdio.h>
int main(){
    int n;

    printf("ENTER THE NUMBER FOR MULTIPLICATION TABLE :");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        int mul=n*i ;
        printf("%d  X  %d  =  %d\n", n ,i, mul);
    }

    return 0;
}