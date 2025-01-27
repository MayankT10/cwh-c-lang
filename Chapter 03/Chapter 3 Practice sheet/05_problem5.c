// Write a program to determine whether a character entered by the user is lowercase or not.

#include<stdio.h>

int main() {
    char a;
    printf("Enter a character:");
    
    if (scanf("%c",&a)!=1) {
        printf("Invalid input");
        return 1;
        // it exists if there is not a single character
    } 


    // this allows mutltiple characters thus its wrong
    // scanf("%c",&a);
    
    
    if (a>=99 && a<=122) {
        printf("Its a lowercase letter\n");
    } else if (a>=65 && a<=90) {
        printf("Its a uppercase letter\n");
    } else {
        printf("Please enter a valid character");
    }
    return 0;
}