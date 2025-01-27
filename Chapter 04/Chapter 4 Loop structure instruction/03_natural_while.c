// Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.

#include<stdio.h>

int main() {
    int count = 0;
    int num = 10;
    while(count<=20) {
        if(count>=10) {
            printf("The value is %d\n",count);
        }
        count++;
        // printf("%d\n",num);
        // num+=1;
        // count++;
    }
    return 0;
}