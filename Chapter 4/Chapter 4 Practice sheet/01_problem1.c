// 1. Write a program to print multiplication table of a given number n.

#include<stdio.h>

int main() {
    int i;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++) {
        printf("%dx%d = %d\n",num,i,num*i);
    }
    return 0;
}