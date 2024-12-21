#include<stdio.h>

int main() {
    char i = 'A';
    char* j = &i;
    // j is a pointer pointing to i (j is a character pointer)
    float k = 5.5;
    float* l = &k;
    printf("The address of i is %p\n",&i);
    printf("The address of j is %p\n",j);
    printf("The address of k is %p\n",&k);
    printf("The address of l is %p\n",l);
    return 0;
}