// 1. Which of the following is used to appropriately read a multi-word string.
// 1. gets()
// 2. puts()
// 3. printf()
// 4. scanf()

// Ans -> 1.gets()

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    gets(str);

    printf("You have entered: %s\n",str);
    return 0;
}