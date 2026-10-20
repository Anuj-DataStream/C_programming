// write a program to calculate the factorial of a given number using a for loop 
#include<stdio.h>
int main(){
    int num_by_user,fac=1;
    
    printf("ENTER THE NUMBER FOR FACTORIAL :");
    scanf("%d",&num_by_user);

    for (int i = num_by_user; i; i--)
    {
        fac*=i;
    }
    printf("THE FACTORIAL OF %d is %d\n",num_by_user,fac);

    return 0;
}