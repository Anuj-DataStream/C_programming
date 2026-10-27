#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; //j is a pointer pointing to i (j is a integer pointer)
    int k =67 ;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", &j);
    printf("The address of i is %p\n", &k);

    printf("the value at address j is %d\n",*j);
    return 0;
}