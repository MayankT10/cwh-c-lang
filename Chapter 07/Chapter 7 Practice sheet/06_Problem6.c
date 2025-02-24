// 6. Write a program containing functions which counts the number of positive integers in an array.

#include<stdio.h>

void check_positive(int arr[],int n) {
    int count = 0;
    for (int i=0;i<n;i++) {
        if (arr[i]>0) count +=1;
    }
    printf("Positive integers in give array is %d\n",count);
}

int main() {
    int arr[] = {-1,-3,-5,5,3,1};
    check_positive(arr,6);
    return 0;
}
