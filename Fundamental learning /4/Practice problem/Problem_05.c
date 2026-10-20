// write a program to calculate the sum of the number occuring in the multiplication table of 8.(consider 8X1 to 8X10)
#include<stdio.h>
int main(){
    int sum=0,mul;

    for (int i=1; i <=10; i++)
    {
        mul=8*i;
        printf("8 X %d = %d\n",i,mul);
        sum+=mul;
        printf("current sum is %d\n",sum);
    }
    printf("sum of multiplication table of 8 is : %d\n",sum);
    return 0;
}