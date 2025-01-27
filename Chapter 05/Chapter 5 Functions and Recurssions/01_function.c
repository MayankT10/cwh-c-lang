#include<stdio.h>

// Function prototype
int sum(int,int);

// Function defination
int sum(int x,int y) {
    printf("The sum of %d and %d is %d\n",x,y,x+y);
    return x+y;
}


int main() {
    int a1=5,b1=10;
    sum(a1,b1); // This is know as function calling

    int a2=15,b2=7;
    int c2 = sum(a2,b2);
    // if we remove the print statement 
    // but we are returning the value of x+y then the value is stored to the variable c
    printf("The value of c2 is %d\n",c2);

    sum(12,5);
    return 0;
}
