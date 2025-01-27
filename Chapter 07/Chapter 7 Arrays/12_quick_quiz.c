// Quick Quiz: Create a 2-d array by taking input from the user. 
// Write a display function to print the content of this 2-d array on the screen.

#include<stdio.h>

void array_print(int arr[10][10],int rows, int cols) {
    for (int i = 0; i < rows;i++ ) {
        for (int j=0;j < cols ; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}

int main() {
    int rows,cols;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    printf("Enter number of columns:");
    scanf("%d",&cols);

    int arr[10][10];

    printf("Enter the elements of array\n");
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            printf("Element at [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);

        } 
        
    }
    printf("The 2D array is\n");
    array_print(arr,rows,cols);
    // for (int i=0;i<rows;i++) {
    //     for (int j=0;j<cols;j++) {
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    // }
}
