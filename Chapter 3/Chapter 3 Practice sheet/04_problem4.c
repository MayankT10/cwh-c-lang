// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include<stdio.h>

int main() {
    
    // int year;
    // printf("Enter year:");
    // scanf("%d",&year);
    // much more optimised 
    // but when entered string it returns Yes its a leap year
    // if ( (year%4==0) && (year%100!=0) || (year%400==0)) {
    //     printf("Yes its a leap year\n");
    // } else {
    //     printf("No its not a leap year");
    // }
    // return 0;


    // optimised way 
    // executes the instructions of the if block if the input is integer


    int year;
    printf("Enter year:");
    if (scanf("%d",&year) != 1 ) { // this line checks if the input is integer or not rest code is same as above on

        printf("Invalid Input.Please enter a valid number\n");
        return 1;
    }

    if ((year%4==0 && year%100!=0) || (year%400==0)) {
        printf("Yes, its a leap year");
    } else {
        printf("No, its not a leap year");
    }

    return 0;



    // int year;
    // printf("Enter year:");
    // scanf("%d",&year);
    // if (year %4 == 0) {
    //     if ( year % 100 == 0) {
    //         if (year % 400 == 0) {
    //             printf("Yes its a leap year");
    //         } else {
    //             printf("No its not a leap year");
    //         }

    //     } else {
    //         printf("Yes its a leap year");
    //     }
    // } else {
    //     printf("No its not a leap year\n");
    // }
    // return 0;
}

