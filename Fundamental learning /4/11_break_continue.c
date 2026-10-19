#include<stdio.h>
int main(){
    
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            continue; //skip this iteration now
        }
        else if(i==9){
            break; //exit the loop now!
        }
        
        printf("the value of i is %d\n", i);
    }

    return 0;
}