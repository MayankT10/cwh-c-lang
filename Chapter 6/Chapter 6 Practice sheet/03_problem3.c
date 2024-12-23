// 3. Write a program to change the value of a variable to ten times of its current value.

#include<stdio.h>

void ten_times(int*);

void ten_times(int* num) {
    *num =  *num * 10;
}

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    ten_times(&a);
    printf("The ten time of the given number is %d\n",a);
    return 0;
}