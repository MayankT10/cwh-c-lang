#include<stdio.h>

int main() {
    char name[20];
    printf("Enter your first name:");
    scanf("%19s",&name);
    // It reads the name upto 19 characters
    printf("Hello,%s Welcome to simple c array program\n",name);
    return 0;
}