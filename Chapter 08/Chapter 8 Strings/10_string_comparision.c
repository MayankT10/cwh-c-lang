#include <stdio.h>
#include <string.h>


// This function is used to compare two strings. It returns 0 if the strings are equal, a negative value if the first string's mismatching character's ASCII value is less than the second string's corresponding mismatching character, and a positive value otherwise.

int main() {
    int a = strcmp("far","joke");
    int b = strcmp("joke","far");
    printf("a:%d and b:%d\n",a,b);
    return 0;
}
