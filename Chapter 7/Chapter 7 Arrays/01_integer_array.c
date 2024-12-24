// Note- array starts from zero
#include<stdio.h>

int main() {
    int marks[10];
    // informs that there can be 10 inetegr elements in the array named marks
    marks[0] = 30;
    marks[1] = 40;
    marks[2] = 35;
    // the last one can be marks[89] and not marks[90]
    // cause it is reserved space to store integers
    printf("Marks 0 is %d \nMarks 1 is %d \nMarks 3 is %d\n",marks[0],marks[1],marks[2]);
    return 0;
}