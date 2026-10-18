#include<stdio.h>
int main(){
    int i = 5;
    printf("the value of i is %d\n", i);
    
    i = i + 5;
    printf("the value of i is %d\n", i);

    printf("the value of i is %d\n", ++i);
// ++i increment first and then prints i (pre increment operator)

    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", i);
// i++ print first and then increment i (post increment operator)

    return 0;
}