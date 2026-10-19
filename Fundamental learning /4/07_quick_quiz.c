// write a program to print 'n' natural number using do-while loop.
#include<stdio.h>
int main(){
    int n,i=1;

    printf("Enter the natural number you want :");
    scanf("%d", &n);

    do{
        printf("Natural number : %d\n",i);
        i++;
    }while(i<=n);

    return 0;
}