#include<stdio.h>

void print_array(int arr[],int n) {
    for (int i=0;i<n;i++) {
        printf("Element %d: %d\n",i,arr[i]);
    }
}

int main() {
    int numbers[] = {1,2,3,4,5,6};
    int size = 6;

    print_array(numbers,size);
    return 0;
}