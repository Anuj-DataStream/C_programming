#include <stdio.h>
int main(){
    int a=4;
    printf("%d %d %d",a,++a,a++);
// expected 4 5 5
// depend on the evalution order
    return 0;
}