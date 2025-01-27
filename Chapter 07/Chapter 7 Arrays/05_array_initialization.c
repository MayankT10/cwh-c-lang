// other ways to initialize an array 

#include<stdio.h>

int main() {
    int cgpa[3] = {9,8,7};
    // or no need to mention number of elements
    // int cgpa[] = {9,8,7}

    // array memory varies on system 
    // for 1 integers it takes 4 bytes
    // here there are 3 elements so 4 x 3 = 12 bytes in memory

    for (int i=0;i<3;i++) {
        printf("The elements of the array at index %d is %d\n",i,cgpa[i]);
    }

    return 0;
}