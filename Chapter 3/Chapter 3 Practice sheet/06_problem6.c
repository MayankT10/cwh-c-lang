// 6. Write a program to find greatest of four numbers entered by the user.

#include<stdio.h>

int main() {
    float num1,num2,num3,num4;
    printf("Enter number 1:");
    scanf("%f",&num1);
    printf("Enter number 2:");
    scanf("%f",&num2);
    printf("Enter number 3:");
    scanf("%f",&num3);
    printf("Enter number 4:");
    scanf("%f",&num4);

    if (num1>=num2 && num1>=num3 && num1>=num4) {
        printf("Number 1 is the greatest\n");
    } else if (num2>=num1 && num2>=num3 && num2>=num4) {
        printf("Number 2 is the greatest\n");
    } else if (num3>=num1 && num3>=num2 && num3>=num4) {
        printf("Number 3 is the largest\n");
    } else if (num4>=num1 && num4>=num2 && num4>=num3) {
        printf("Number 4 is the greatest\n");
    } else {
        printf("Please enter a valid number\n");
    }
    return 0;

}