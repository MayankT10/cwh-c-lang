#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "abcdefgh";
    // strlen() gives us the length of the string exluding null character
    printf("%d\n",strlen(st));
    return 0;
}