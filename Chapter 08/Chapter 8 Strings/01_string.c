#include<stdio.h>

int main() {
    char st[] = {'a','b','c','\0'};
    // shortcut method for initializing
    // char s[] = "ABC";
    // In this above case C automatically adds the null character
    // \0 is null character 
    // it means the the string is ended ( or used to notify that string is ended )
    printf("First character is %c\n",st[0]);
    return 0;
}