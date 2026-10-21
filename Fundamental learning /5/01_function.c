#include<stdio.h>
// function prototype
int sum(int,int);

// function definition
int sum(int x, int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}

int main(){
    int a=10;
    int b=11;

    sum(a,b);

    int c = sum(3,4);
    printf("%d\n",c);
    return 0;
}