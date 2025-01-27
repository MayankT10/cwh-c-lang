#include<stdio.h>

int change(int a);

int change(int a) {
    a = 77;
    printf("The value of a is %d\n",a);
    return 0;
}

int main() {
    int b=22;
    change(b);
    // Copy of vaqlue of b is sent to change function thus the value of b remains the same
    printf("b is %d\n",b);
    return 0;
}