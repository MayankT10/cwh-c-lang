// 7. Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

#include<stdio.h>

int pattern(int);

int pattern(int n) {
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=(2*i-1);j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int lines;
    printf("Enter number of lines:");
    scanf("%d",&lines);
    pattern(lines);
    return 0;
}