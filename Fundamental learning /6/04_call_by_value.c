#include<stdio.h>
int sum(int,int);
int sum(int a,int b){
    return a+b;
}

int main(){
    printf("The sum of 1 and 2 is %d\n", sum(1,2));
    return 0;
}