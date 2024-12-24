#include<stdio.h>

int main() {
    float percentile[90];
    int num,i;

    printf("Enter number of students(max 90):");
    scanf("%d",&num);

    if (num>90||num<=0) {
        printf("Invalid number of students");
        return 1;
    } 

    // taking input of percentiles
    printf("Enter the percentile of %d students:\n",num);
    for (i=0;i<num;i++) {
        printf("Student %d: ",i+1);
        scanf("%f",&percentile[i]);
    }

    // Elements of an array can be accessed using:
    // scanf("%d", &marks[0]); // input first value
    // printf("%d", marks[0]); // output first value of the array

    // displaying the percentiles
    printf("Percentiles of the students are:\n");
    for (i=0;i<num;i++) {
        printf("Student %d: %.2f\n",i+1,percentile[i]);
    }

    return 0;
}