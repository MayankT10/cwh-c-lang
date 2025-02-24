#include<stdio.h>

int main() {
    char st[30];
    gets(st); // takes input from the user and stores in st

    puts(st);
    // puts prints and automatically appends new line
    // printf("%s\n",st);
    return 0;
}

// DONT USE GETS , USE FGETS INSTEAD
// you get buffer overflow problem if you use gets
// butter overflow means that gets does not know how much space is available in memory
// and if the user enters more characters than the allocated space ,
// the extra data overflows into nearby memory ( may cause crashes or security issues )

