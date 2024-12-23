// 7. Try problem 3 using call by value and verify that it does not change the value of the said variable.

// 3. Write a program to change the value of a variable to ten times of its current value.

// #include<stdio.h>

// void ten_times(int*);

// void ten_times(int* num) {
//     *num =  *num * 10;
// }

// int main() {
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     ten_times(&a);
//     printf("The ten time of the given number is %d\n",a);
//     return 0;
// }

#include<stdio.h>

void ten_times(int);

void ten_times(int num) {
    num = num * 10;
    printf("\nThe value inside the function is %d\n",num);
}
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    ten_times(a); // pass by value
    printf("The ten times of the give number is %d\n",a);

    return 0;
}

// yeah , the value does not changes because the function modifier the copy of a and we value of a does not get affected