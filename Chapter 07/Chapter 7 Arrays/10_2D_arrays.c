// MULTIDIMENSIONAL ARRAYS
// 2D and 3D Arrays

// 2D is basically matrix
// Rubix Cube is an example of 3D 

#include<stdio.h>

int main() {
    int arr[3][3] = {
        {1,4,5}, // Row 0
        {0,1,3}, // Row 1
        {5,1} // Row 2
    };
    

    // This 2D arrays in memory  

    // arr[0][0] = first row , first column
    // arr[0][1] = first row , second column
    // arr[2][1] = third row , second column

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }
}