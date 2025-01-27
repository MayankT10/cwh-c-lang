// 1. Create an array of 10 numbers.
// Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main() {
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr = arr;
    printf("The value at address %u is %d\n",ptr+2,*(ptr+2));
    return 0;
}