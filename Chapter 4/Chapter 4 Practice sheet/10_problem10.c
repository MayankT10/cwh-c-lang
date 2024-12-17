// 10. Write a program to check whether a given number is prime or not using loops.

#include<stdio.h>

int main() {
    int num,i,isprime= 1;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<=1) {
        isprime = 0;
    } else {
        for (i=2;i<=num/2;i++) {
            if (num%i==0) {
                isprime=0;
                break;
            }
        }

    }

    if (isprime) {
        printf("Yes,its a prime number.");
    } else {
        printf("No,its not a prime number");
    }

}
