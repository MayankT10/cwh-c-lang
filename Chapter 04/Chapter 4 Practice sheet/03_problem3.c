// 3. A do while loop is executed:
// a. At least once.
// b. At least twice.
// c. At most once.

// ans - a. at least once
// example is given below

#include<stdio.h>

int main() {
    int num = 1;
    do {
        printf("%d\n",num);
        num++;

    } while (num>=5);
    return 0;
}

// even if the condition is false it still prints 1 