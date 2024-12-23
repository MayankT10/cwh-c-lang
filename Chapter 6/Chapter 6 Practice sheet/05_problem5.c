// 5. Write a program using a function which calculates the sum and average of two numbers. 
// Use pointers and print the values of sum and average in main().

#include<stdio.h>

void calculate(int *a,int *b,int *sum,float *average) {
    *sum = *a + *b;
    *average = *sum/2.0;
} 

int main() {
    int num1,num2,sum;
    float average;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    
    calculate(&num1,&num2,&sum,&average);
    printf("The sum of two number is %d\n",sum);
    printf("The average of two numbers is %.2f\n",average);
    
    printf("The address of the sum is %p\n",&sum);
    printf("The address of the average is %p\n",&average);

    return 0;


}

// int* sum(int x, int y) {
//     int s = x+y;
//     int* ptr = &s;
//     printf("The sum is %d\n",s);
//     return ptr;
// }

// float* average(int x,int y) {
//     float avg = (x+y)/2.0;
//     float * ptr = &avg;
//     printf("The average is %.2f\n",avg);
//     return ptr;
// }

// int main() {
//     int num1,num2;
//     printf("Enter number 1:");
//     scanf("%d",&num1);
//     printf("Enter number 2:");
//     scanf("%d",&num2);
//     int* ptr1;
//     float* ptr2;

//     ptr1 = sum(num1,num2);
//     ptr2 = average(num1,num2);

//     printf("The address of the sum is %p\n",ptr1);
//     printf("The address of the average is %p\n",ptr2);
//     return 0;


// }