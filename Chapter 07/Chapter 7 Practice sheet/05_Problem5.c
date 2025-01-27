// 5. Write a program containing a function which reverses the array passed to it.


#include<stdio.h>

void print_array(int a[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void reverse_array(int arr[],int n) {
    int temp;
    for (int i=0;i<n/2;i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    print_array(arr,9);
    reverse_array(arr,9);
    print_array(arr,9);
    return 0;
}