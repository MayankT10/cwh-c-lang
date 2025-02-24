#include <stdio.h>
#include <string.h>

int main() {
    char st1[] = "Hello";
    char st2[] = "Sir";
    strcat(st1,st2);
    // strcat concatenates two strings 
    // st1 will contain st2 but with no space
    puts(st1);
    return 0;
}