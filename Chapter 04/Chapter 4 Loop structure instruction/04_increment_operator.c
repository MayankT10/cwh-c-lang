// increment operator 
// ++i or i++
// Decrement i first and then print
// printf("++i = %d\n", ++i);
// ++i means i = i + 13

#include<stdio.h>

int main() {
    int i=5;
    
    printf("The value of i is %d\n",i); // 5

    // ++i it first increases and then prints i
    printf("The value of i is %d\n",++i); // 6

    // i++ it first prints i and then increases
    printf("The value of i is %d\n",i++); // 5

    return 0;
}
