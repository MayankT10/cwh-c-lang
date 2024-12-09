#include <stdio.h>

int main() {
    int b = 2 , c = 4;
    // int sum;
    // sum = b + c;
    int sum = b + c;

    printf("Sum of %d and %d is %d\n",b,c,sum);
    printf("The remainder when %d is divided by %d is %d\n",b,c,b%c);
    // % is know as modulus operator
    // it returns the remainder
    return 0;
}
