// repeat the problem 3 for general input provided by the user using scanf
#include<stdio.h>
int main(){
    int arr[10];
    int num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    for(int i=0; i<10; i++){
        arr[i] = num * (i + 1);
    }
    for(int i=0; i<10; i++){ 
        printf("The value of %d X %d = %d\n", num, i + 1, arr[i]);
    }
    return 0;
}