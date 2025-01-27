// 1. Which of the following is invalid in C?
// a. int a=1; int b = a;
// b. int v = 3*3;
// c. char dt = ‘21 dec 2020’;

#include<stdio.h>

int main() {
    int a = 1;
    int b = 1;
    int v = 3*3;
    char dt = '21 dec 2020';
    printf("Value of a is %d and value of b is %d\n",a,b);
    printf("Value of v is %d\n",v);
    printf("%c",dt);
    return 0;
}

// c . char dt = '21 dec 2020' is invalid cause only one character is valid and not multiple characters and numbers