// && (AND) operator , true when both conditions are true
// || (OR) operator , true when either of the condition is true
// ! (NOT) operator , returns true if the conditons is false , vice versa 


// Operator Precedence Priority
// if they are in same line priority number then its considered left to right
// 1st !
// 2nd * / ! % 
// 3rd + - 


#include<stdio.h>

int main() {
    int a,b;
    printf("Enter two numbers(a b):");
    scanf("%d %d",&a,&b);

    if (a>0 && b>0) {
        printf("\nBoth are positive numbers");
    } else {
        printf("\nAlteast one number is positive");
    }

    if (a<0 || b<0) {
        printf("\nAtleast one of the number is less than 0");
    } else {
        printf("\nBoth numbers are non negative");
    }

    if (!(a== 0 || b == 0)) {
        printf("\nNeither of the number is zero");
    } else {
        printf("\nAtleast one of the number is zero");
    }

    return 0;
}