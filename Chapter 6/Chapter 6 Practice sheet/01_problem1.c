// Write a program to print the address of a variable. 
// Use this address to get the value of the variable.

#include<stdio.h>

int main() {
    int i = 30;
    int* j = &i;
    printf("The address of i is %p\n",j); // j = &i
    printf("The value of the variable is %d",*j);
    return 0;
}