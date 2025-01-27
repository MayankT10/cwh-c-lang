// Types of function calls
// 1. Call by value :- sending the value of arguments
// 2. Call by refernce :- sending the address of the arguments

#include<stdio.h>

int sum(int,int);

int sum(int a,int b) {
    return a + b;
}

int main() {
    int c = sum(3,4);
    printf("%d\n",c);
    return 0;
}