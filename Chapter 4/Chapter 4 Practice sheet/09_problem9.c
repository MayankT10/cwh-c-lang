// 8. Write a program to calculate the factorial of a given number using a for loop.
// 9. Repeat 8 using while loop.

#include<stdio.h>

int main() {
    int num;
    int i=1;
    int factorial = 1;
    printf("Enter a value:");
    scanf("%d",&num);
    while(i<=num) {
        factorial *= i;
        i++;
    }
    printf("%d\n",factorial);
    return 0;
}