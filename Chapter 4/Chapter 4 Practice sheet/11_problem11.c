// 10. Write a program to check whether a given number is prime or not using loops.
// 11. Implement 10 using other types of loops.

#include<stdio.h>

int main() {
    int num;
    int i =2;
    int isprime=1;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num==1||num==0) {
        isprime=0;
    } else {
        // i = 2;
        // Using while loop
        // while(i*i<=num) {
        //     if (num%i==0) {
        //         isprime=0;
        //         break;
        //     }
        //     i++;

        // }

        // using do while loop
        do {
            if (num%i==0&&num!=2) {
                isprime=0;
                break;
            }
            i++;

        }  while(i*i<=num);
    }
    if(isprime) {
        printf("Its a prime number\n");
    } else {
        printf("Its not a prime\n");
    }
}