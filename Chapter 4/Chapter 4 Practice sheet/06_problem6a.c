// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

// using for loop

#include<stdio.h>

int main() {
    int num;
    int sum;
    for(num=1;num<=10;num++){
        sum += num;
    }
    printf("Sum of first ten natural number is %d\n",sum);
    return 0;
}