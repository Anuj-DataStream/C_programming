// write a program containing a function which reverese the array passes to it 
#include<stdio.h>

void printarray(int a[] , int n){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverseArray(int a[], int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printarray(arr,5);
    reverseArray(arr,5);
    printarray(arr,5);
    return 0;
}