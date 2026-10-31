// try problem 3 using call by value and verify that it does not change the value of the said variable.
#include<stdio.h>

void change_to_10times(int a){
    a = a * 10;
}

int main(){
    int x=45;
    
    printf("the value of x is %d\n",x);
    change_to_10times(x);
    printf("the value of x is %d\n",x);

    return 0;
}