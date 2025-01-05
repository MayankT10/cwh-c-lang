// Quick Quiz: Write a program to accept marks of five students in an array and print them on the screen.

#include<stdio.h>

int main() {
    float marks[5];
    int num =5,i;

    // accepting marks of five students
    printf("Enter the marks of 5 students\n");
    for(i=0;i<num;i++) {
        printf("Student %d: ",i+1);
        scanf("%f",&marks[i]);
    }

    // printing the marks of the five students
    printf("\nMarks of the students are: \n");
    for(i=0;i<num;i++) {
        printf("Student %d: %.2f\n",i+1,marks[i]);
    }

    return 0;

}