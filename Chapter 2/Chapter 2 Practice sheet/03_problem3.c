// 3. Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a % 97 == 0)
    {
        printf("Number %d is divisible by 97", a);
    }
    else
    {
        printf("Number %d is not divisible by 97");
    }
    return 0;
}