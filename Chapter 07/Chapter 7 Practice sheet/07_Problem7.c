// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively

#include<stdio.h>

// int main() {
//     // int num;
//     // printf("Enter a number:");
//     // scanf("%d",&num);
//     int arr[3][10];
//     int base_numbers[3] = {2,7,9};
//     for (int i =0;i<3;i++) {
//         for (int j=0;j<10;j++) {
//             arr[i][j] = base_numbers[i] * (j+1);
//         }
//     }

//     for (int i=0;i<3;i++) {
//         printf("The multiplication table for %d:\n",base_numbers[i]);
//         for (int j=0;j<10;j++) {
//         printf("%d x %d = %d\n",base_numbers[i],j+1,arr[i][j]);
//     }
//     }
    
//     printf("\n");

// }


int main() {
    int arr[3][10];
    int numbers[3] = {2,7,9};
    for (int i=0;i<3;i++) {
        for (int j=0;j<10;j++) {
            arr[i][j] = numbers[i] * (j+1);
        }
    }
    for (int i=0;i<3;i++) {
        printf("The Multiplication Table for %d:\n",numbers[i]);
        for (int j=0;j<10;j++) {
            printf("%d x %d = %d\n",numbers[i],j+1,arr[i][j]);
        }
    }
    printf("\n");
}