// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.


// Ans - False 
#include<stdio.h>

int main() {
    int s[] = {20,40,60};
    // int* ptr = s;
    printf("The value at address %u is %d\n",(s+3),*(s+3));
    return 0;
}