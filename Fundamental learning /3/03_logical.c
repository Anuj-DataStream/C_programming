#include<stdio.h>
int main(){
    int a=1; int b=0;
    printf("the value of a and b is %d\n", a&&b); //1 0 0 0
    printf("the value of a or b is %d\n", a||b);  //1 1 1 0
    printf("the value of not a is %d\n", !a);     //0 1
    return 0; 
}