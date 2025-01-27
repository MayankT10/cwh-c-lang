// 2. Write a program to print multiplication table of 10 in reversed order.

#include<stdio.h>

int main() {
    int i;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=10;i>=1;i--) {
        printf("%dx%d = %d\n",num,i,num*i);
    }
    return 0;
}