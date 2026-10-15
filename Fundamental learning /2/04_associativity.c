#include<stdio.h>
int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    //                priority order 
    //                1st              */%    (follow the left to right rule)
    //                2nd              +- 
    //                3rd              =
    
    printf("the value is %d\n" , a*b/c + 7);
    return 0;

}
