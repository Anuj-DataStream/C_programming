// write a Program to print multiplication table of 10 in reversed order
#include<stdio.h>
int main(){
    int n;

    printf("ENTER THE NUMBER FOR MULTIPLICATION TABLE :");
    scanf("%d",&n);

    for (int i = 10; i ; i--)
    {
        int mul=n*i ;
        printf("%d  X  %d  =  %d\n", n ,i, mul);
    }

    return 0;
}