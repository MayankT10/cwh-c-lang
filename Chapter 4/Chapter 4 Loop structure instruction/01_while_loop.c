// Three types of loop in c language 
// 1. while loop
// 2. do-while loop
// 3. for loop

// while loop syntax
// while (condition){
//      statement }
// while loop is executted untill the condition is true

#include<stdio.h>

int main() {
    int i;
    printf("Enter number:");
    scanf("%d",&i);
    while (i<10) {
        printf("The value of i is %d\n",i);
        i ++;
    }
    return 0;
}