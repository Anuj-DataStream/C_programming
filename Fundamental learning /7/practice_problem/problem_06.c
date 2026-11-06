// write a program containing fucntions which counts the number of positive integers in a array
#include <stdio.h>
int count(int a[] , int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            count++;
        }
    }
    return count;
}

int main(){
    int a[10]={1,2,3,-4,5,6,-7,8,-9,10};
    printf("The number of positive integers in the array is %d\n", count(a, 10));
    return 0;       
}