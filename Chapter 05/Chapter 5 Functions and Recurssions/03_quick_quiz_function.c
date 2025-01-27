// Quick Quiz: Write a program with three functions
// 1. Good morning function which prints “good morning”.
// 2. Good afternoon function which prints “good afternoon”.
// 3. Good night function which prints “good night”.
// main() should call all of these in order 1→2→3

// For output order the order of function call matters and not order of function defination
#include<stdio.h>

void morning();
void afternoon();
void night();

void morning() {
    printf("good morning\n");
}

void night() {
    printf("good night\n");
}

void afternoon() {
    printf("good afternoon\n");
}



int main() {
    morning();
    afternoon();
    night();
    return 0;
}