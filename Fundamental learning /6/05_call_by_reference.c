#include<stdio.h>

int sum(int*,int*);

// sum function should change the value of x 
int sum(int* a,int* b){
    *a = 6;    
    return *a + *b;
}

int main(){
    int x=1 ,y=2;
    printf("The sum of 1 and 2 is %d\n", sum(&x,&y));
    printf("The value of x is %d\n", x);
    return 0;
}