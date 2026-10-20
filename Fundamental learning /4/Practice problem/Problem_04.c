// write a program to implement program 3 using 'for' adn 'do while' loop
#include<stdio.h>
int main(){
    int i=1 ,sum=0;
    
    do{
        printf("the natural number is : %d\n",i);
        sum=sum+i;
        printf("and current sum is : %d\n\n",sum);
        i++;
    } while (i<=10);
    
    // for (i; i <=10 ; i++){
    //     printf("the natural number is : %d\n",i);
    //     sum=sum+i;
    //     printf("and current sum is : %d\n\n",sum);
    // }
    
    printf("the sum of first 10 natural number is : %d\n",sum);
    return 0;
}