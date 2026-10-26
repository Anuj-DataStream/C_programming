// write a function to calculate force of attraction on a body of mass 'm' excerted by earth consider g=9.8m/s2
#include<stdio.h>
float force(float m);

float force(float m){
    return m*9.8;
}

int main(){
    float m=5;
    printf("The force of attraction for mass %.2f kg is %.2f N \n",m,force(m));
    return 0;
}