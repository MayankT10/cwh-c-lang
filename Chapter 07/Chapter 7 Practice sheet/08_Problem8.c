// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively
// 8. Repeat problem 7 for a custom input given by the user.

#include<stdio.h>

int main() {
    int arr[3][10];
    // int num;
    // printf("How many tables you want to printt:");
    // scanf("%d",&num);
    // printf("Which all tables you want to print");
    // int numbers[] = {num};
    int numbers[3];
    printf("Enter the number for which you want multiplication tables:");
    for (int i=0;i<3;i++) {
        scanf("%d",&numbers[i]);
    }


    for (int i = 0;i<3;i++) {
        for (int j=0;j<10;j++) {
            arr[i][j] = numbers[i] * (j+1);
        }
    }

    for (int i=0;i<3;i++) {
        printf("The Multiplication table of %d:\n",numbers[i]);
        for (int j=0;j<10;j++) {
            printf("%d x %d = %d\n",numbers[i],(j+1),arr[i][j]);
        }
    } 

    return 0;
}
