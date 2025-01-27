// 5. Write a program to sum first ten natural numbers using while loop.

#include<stdio.h>

int main() {
    int num=1;
    int sum=0;
    while(num<=10) {
        sum += num;
        num++;        
    }
    printf("Sum of first ten natural number is %d\n",sum);
    return 0;
}