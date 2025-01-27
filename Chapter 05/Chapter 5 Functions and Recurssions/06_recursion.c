#include<stdio.h>

int factorial(int);

int factorial(int num) {
    int fact;
    if (num==0||num==1) {
        return 1;
    } else {
        fact = num * factorial(num-1);
        return fact;
    }
}

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Factorial of %d is %d\n",a,factorial(a));
}