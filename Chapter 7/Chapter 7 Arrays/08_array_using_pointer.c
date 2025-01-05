// indexing
// array[] = {10,20,30,40}
// first element of the array will have index 0
// index = 0 for 10 , 1 for 20 , 2 for 30 and so on ...

#include<stdio.h>

int main() {
    int arr[] = {10,20,30,40};
    int *ptr = arr; // pointer to the element at index 0

    printf("Value at index 0: %d\n",*ptr);

    ptr++;
    printf("Value at index 1: %d\n",*ptr);

    ptr++;
    printf("Value at index 2: %d\n",*ptr);

    // Accessing 3rd element of array or element at index no. 2 using indexing
    int value1 = arr[3];

    printf("Value at index 3: %d\n",value1);

    return 0;
}