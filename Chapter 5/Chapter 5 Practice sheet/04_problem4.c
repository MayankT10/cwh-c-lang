// 4. Write a program using recursion to calculate nth element of Fibonacci series.

// 0,1,1,2,3,5,8,13,21,.....
// fibonacci(n) = fibonacci(n-1) + fibonacci (n-2)


#include<stdio.h>
int fibonacci(int);

int fibonacci(int num) {
    if (num==1||num==2) {
        return num-1;
    } else {  
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The fibonacci series at %d is %d\n",n,fibonacci(n));
    return 0;
}