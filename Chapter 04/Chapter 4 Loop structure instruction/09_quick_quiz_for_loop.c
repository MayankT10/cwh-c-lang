// Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop

#include<stdio.h>

int main() {
    int i;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++) {
        printf("%d\n",i);
    }
    return 0;
}