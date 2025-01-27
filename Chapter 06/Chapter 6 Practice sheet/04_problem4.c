// 4. Write a function and pass the value by reference.

#include<stdio.h>

void pass_function(int *x) {
    printf("Inside pass_function, address received is %p\n", x);
    printf("Inside pass_function, value received is %d\n", *x);
}


int main() {
    int num = 10;
    printf("Original address is %p\n",&num);
    printf("Original Value is %d\n",num);
    pass_function(&num); // passing value to the function named pass_function by refernce    
    printf("Address after passing to function is %p\n",&num);
    printf("Value after passing to function is %d\n",num);
    return 0;
}