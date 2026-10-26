// write a function to convert celsius temperature into fahrenheit
#include<stdio.h>

float c_to_f(float c);


float c_to_f(float c){
    return (((9*c)/5) + 32);
}
int main(){
    float c=50;
    printf("Celsius to fahrenheit for %f to %f\n", c, c_to_f(c));
    return 0;
}