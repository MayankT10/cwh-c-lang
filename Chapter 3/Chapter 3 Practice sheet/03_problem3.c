// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include<stdio.h>

int main() {
    float income;

    printf("Enter your income:");
    scanf("%f",&income);

    if (income>=250000 && income<500000) {
        printf("The income tax need to be paid is %.2f",(income-250000)*0.05);
    } else if (income>=500000 && income<1000000)  {
        printf("The income tax need to be paid is %.2f",(500000-250000)*0.05 + (income-500000)*0.20);
    } else if (income>1000000) {
        printf("The income tax need to be paid is %.2f",(income-250000)*0.05 + (1000000-500000) *0.20 + (income - 1000000)*0.30);
    } else if (income<250000) {
        printf("No income tax need to be paid");
    } else {
        printf("Please enter a valid income");
    } 

    return 0;

}