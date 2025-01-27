#include<stdio.h>

int main() {
    // //  pointer arithmetic using integer pointer
    // int a = 10;
    // int* ptr = &a;
    // // %u is used to get address in integer value
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // // it increases by number of bytes each consumes (also depends on the system)
    // // in this system integers takes 4 bytes thus ptr++ increases by 4
    // printf("The value of ptr++ is %u\n",ptr);
    // return 0;

    // pointer arithmetic using character pointer
    char b= 'c';
    char* d = &b;
    printf("The address of char b is %u\n",&b);
    printf("The address of char b is %u\n",d);
    d++;
    printf("The address of char b after d++ is %u\n",d);
    return 0;

}