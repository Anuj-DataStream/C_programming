// repeat problem 6 using while loop
#include<stdio.h>
int main(){
    int num_by_user,fac=1,i;
    printf("ENTER THE NUMBER FOR FACTORIAL :");
    scanf("%d",&num_by_user);
    i=num_by_user;
    while (i)
    {
        fac*=i;
        i--;
    }
    printf("THE FACTORIAL OF %d is %d\n",num_by_user,fac);
    return 0;
}