#include <stdio.h>

int main() {
    int marks[] = {12, 34, 56, 78};

    // int* ptr = &marks[0];
    int* ptr = marks;

    for (int i = 0; i < 4; i++) {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The address of marks[%d] is %u\n\n", i, *ptr);
        ptr++;
    }

    return 0;
}