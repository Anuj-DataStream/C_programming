// write a program to check whether a given number is prime or not using loops
#include<stdio.h>
int main(){
    int n,prime=0;

    printf("ENTER THE NUMBER TO CHECK PRIME NUMBER :");
    scanf("%d",&n);
    
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            prime=1;
        }
    }
    if(prime){
        printf("%d is not prime\n", n);
    }
    else{
        printf("%d is prime\n", n);
    }
    return 0;
}