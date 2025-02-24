// 2. Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include<stdio.h>
#include<string.h>

int main() {
    // using %s
    char str1[20];
    printf("Enter string 1: ");
    scanf("%s",str1);
    printf("%s\n",str1);
    
    // using %c 
    char str2[20];
    printf("Enter string 2:");
    for (int i=0;i<20;i++) {
        scanf("%c",&str2[i]);
        fflush(stdin);
    }
    str2[19] = '\0';

    return 0;
}
