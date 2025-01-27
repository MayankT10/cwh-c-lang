// 1. Write a program using function to find average of three numbers.

#include<stdio.h>

float average(int,int,int);

float average(int num1,int num2,int num3) {
    return (num1+num2+num3)/3.00; 
}

int main() {
    int a,b,c;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    printf("The average of %d , %d and %d is %.2f\n",a,b,c,average(a,b,c));
    return 0;
}