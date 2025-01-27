// swaping two numbers

#include<stdio.h>

void swap(int *x,int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;    
} 

int main() {
    int a=10;
    int b=20;
    printf("Values before swapping are a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("Values after swapping are a = %d and b = %d\n",a,b);
    return 0;
}