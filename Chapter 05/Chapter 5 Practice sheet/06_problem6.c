// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include<stdio.h>

int sum(int);

int sum(int num) {
    if (num==1) {
        return 1;
    } 
    return num+sum(num-1);

    // This method is by mathematical formula and not by recursion
    // return (num*(num+1))/2;
}

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of first %d natural number is %d\n",n,sum(n));
    return 0;
}