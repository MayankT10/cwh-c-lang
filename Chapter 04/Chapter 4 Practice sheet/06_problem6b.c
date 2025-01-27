// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

// using do-while loop

#include<stdio.h>

int main() {
    int num = 1;
    int sum;
    do {
        sum +=num;
        num++;
    } while(num<=10);
    printf("Sum of first ten natural number is %d\n",sum);
    return 0;
}