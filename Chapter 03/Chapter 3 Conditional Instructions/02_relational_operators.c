// == is equals to and = is for assignment operator
// != not equal to 
// >= greater than equal to
//  > greater than
// < less than
// <= less than equal to

#include<stdio.h>

int main() {
    int a , b;

    printf("Enter number 1:");
    scanf("%d",&a);
    printf("\nEnter number 2:");
    scanf("%d",&b);

    int c = a; // Assignment Operator
    printf("\nValue of number 3 is %d",c);

    if (a==b) {
        printf("\nNumber 1 is equal to number 2");
    } else {
        printf("\nNumber 1 is not equal to number 2");
    }

    if (a!=b) {
        printf("\nNumber 1 is not equal to number 2");
    } else {
        printf("\nNumber 1 is equal to number 2");
    }

    if (a>b) {
        printf("\nNumber 1 is greater than number 2");
    } else {
        printf("\nNumber 1 is less than number 2");
    }

    if (a<=b) {
        printf("\nNumber 1 is less than or equal to number 2");
    } else {
        printf("\nNumber 1 is greater than number 2");
    }

    return 0;    
}
   