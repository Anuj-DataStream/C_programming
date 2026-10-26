// write a recursive function to calculate the sum of first n natural number 
#include<stdio.h>
int sum(int n);
int sum(int n){
    if (n==1){
        return 1;
    }
    return sum(n-1) + n;
}
int main(){
    int n=4;
    printf("the sum of first %d natural number is %d",n , sum(n));
    return 0;
}