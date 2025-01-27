// Write a c program using while to print first 10 even numbers

#include<stdio.h>

int main() {
    int count = 1;
    int num = 2;
    // starting with 2(even no.) thus count will be 1

    while(count<=10) {
        printf("%d\n",num);
        num += 2;
        count++;
    }
    return 0;
}