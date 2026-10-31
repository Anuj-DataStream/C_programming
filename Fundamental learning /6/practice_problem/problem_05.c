// write a program using function which calculates the sum and average of two numbers use pointers and print the value of sum adn average in main()
#include<stdio.h>

int sum(int a ,int b){
    printf("the sum is %d\n", a+b);
}

int average(int a , int b){
    printf("the average is %f\n", (a+b)/2.0);
}
int main(){
    int x=4,y=5;
    sum(x,y);
    average(x,y);
    return 0;
}