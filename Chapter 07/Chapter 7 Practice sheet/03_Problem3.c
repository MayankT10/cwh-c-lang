// 3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.


#include<stdio.h>

int main() {
    int arr[10] = {};
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i=0;i<10;i++) {
        arr[i] = num * (i+1); 
    }

    printf("The Multiplication Table of %d is :\n",num);
    for (int i=0;i<10;i++) {
        printf("%d x %d = %d\n",num,i+1,arr[i]);
    }
    return 0;
}