// Quick Quiz: Create a string using double quotes and print its content using a loop.

#include<stdio.h>

int main()  {
    // char str[] = {'a','b','c','\0'};
    char str[] = "abc";
    for (int i=0;i<3;i++)  {
        // if i<=3 it also gives null character ( which is basically space )
        printf("The character is %c\n",str[i]);
    }
}