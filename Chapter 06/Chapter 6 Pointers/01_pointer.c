
#include<stdio.h>

int main() {
    int i =10;
    int* j= &i;
    // j is a integer pointer pointing (storing) to i

    printf("The address of i using &i is %p\n",&i);
    // Everytime we run the address is different 
    // In Integer we can use %u
    printf("Address of i using &i in integer is %u\n",&i);

    printf("The address of i using int* j=&i is %p\n",j); 
    // &i and j wil give the same values only
    printf("Address of j using int* j=&i in integer is %u\n",j);

    
    return 0;
}