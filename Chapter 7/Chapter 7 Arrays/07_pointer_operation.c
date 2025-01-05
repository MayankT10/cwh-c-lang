#include<stdio.h>

int main() {
    int arr[] = {10,20,30,40,50};
    int *p1 = arr;
    int *p2 = arr + 2;

    // Addition of number to pointer
    printf("Pointer p1 before addition: %p\n",p1);
    p1 = p1 + 2;
    printf("Pointer p1 after addition: %p\n",p1);

    // Subtraction of number to pointer
    printf("Pointer p1 before subtraction %p\n",p1);
    p1 = p1 - 1;
    printf("Pointer p1 after subtraction %p\n",p1);
    printf("Points to value: %d\n",*p1);

    // Subtraction of one pointer from another
    printf("Pointer p1: %p\n",p1);
    printf("Pointer p2: %p\n",p2);
    int diff = p2 - p1;
    printf("The difference between pointers p2 and p1 is %d\n",diff);
    printf("The difference between pointers p2 and p1 is %u\n",diff);
    printf("The difference between pointers p2 and p1 is %p\n",diff);

    // Comparison of two pointer variables
    if (p1>p2) {
        printf("Pointer p1 (%p) is greater than pointer p2 (%p)\n",p1,p2);
    } else if (p1<p2) {
        printf("Pointer p1 (%p) is less than pointer p2 (%p)\n ",p1,p2);
    } else {
        printf("Pointer p1 (%p) and pointer p2 (%p) are equal",p1,p2);
    }
    return 0;

}