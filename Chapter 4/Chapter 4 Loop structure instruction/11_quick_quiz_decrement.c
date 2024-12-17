// Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.

#include<stdio.h>

int main() {
    int i;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i=num;i>=1;i--) {
        printf("%d\n",i);
    }
    return 0;
}