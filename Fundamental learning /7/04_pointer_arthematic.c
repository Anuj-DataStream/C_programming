#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a ;
    char b='c';
    char *ptr1=&b ;
    printf("The address of a: %u\n", &a);
    printf("The address stored in ptr: %u\n", ptr);
    ptr++;
    printf("The address stored in ptr after increment: %u\n", ptr);

    printf("The address of b: %u\n", &b);
    printf("The address stored in ptr1: %u\n", ptr1);
    ptr1++;
    printf("The address stored in ptr1 after increment: %u\n", ptr1);
    return 0;
}