// 6. Write a program to print the value of a variable i by using “pointer to pointer” type of variable.

#include<stdio.h>

int main() {
    int i =10;
    int* j = &i;
    int **k = &j;
    printf("The address of variable i is %p\n",&i);
    printf("The address of variable i by using pointer to pointer is %p\n",(*k)); //*k is same as &(**k)
    printf("The value of variable i is %d\n",i);
    printf("The value of variable i by using pointer to pointer is %d\n",(**k));
    return 0;
}