// In c language elif does not work (unlike python) we have to use else if

// Grade Calculator:

// Write a program that reads a student's score and prints their grade:
// "A" for scores 90 and above.
// "B" for scores between 80 and 89.
// "C" for scores between 70 and 79.
// "D" for scores between 60 and 69.
// "F" for scores below 60.

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100) {
        printf("Grade A");
    } else if (marks>=80 && marks<90) {
        printf("Grade B");
    } else if (marks>=70 && marks<80) {
        printf("Grade C");
    } else if (marks>=60 && marks<70) {
        printf("Grade D");
    } else if (marks>=33 && marks<60) {
        printf("Grade E");
    } else if (marks>=0 && marks<33) {
        printf("Grade F");
    } else {
        printf("Enter valid marks");
    }
    return 0;
}