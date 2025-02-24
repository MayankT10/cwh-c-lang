#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "abc";
    char target[30];
    strcpy(target,source);
    puts(source);
    puts(target);
    return 0;
}
