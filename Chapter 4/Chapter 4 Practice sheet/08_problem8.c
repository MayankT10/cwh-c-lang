// 8. Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main() {
    int num=1;
    int i;
    int factorial;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i=1;i<=num;i++) {
        factorial+=i;
    } 
    printf("%d\n",factorial);
    return 0;
}