// write a program to sum first ten natural number using while loop
#include<stdio.h>
int main(){
    int i=1,sum=0;
    while (i<=10)
    {
        printf("the natural number is : %d\n",i);
        sum=sum+i;
        printf("and current sum is : %d\n\n",sum);
        i++;
    }
    printf("the sum of first 10 natural number is : %d\n",sum);
    return 0;
}