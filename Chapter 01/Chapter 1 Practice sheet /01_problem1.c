// 1. Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include<stdio.h>

int main() {
    int l,b;
    // l = 10;
    // b = 20;

    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    printf("\nThe area of rectangle is %d\n",l*b);
    return 0;
}
