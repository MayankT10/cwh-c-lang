// 4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>

int main() {
    float p = 500 , t = 3 , r = 5;
    float interest = p * (r/100) * t;
    printf("Principal Amount:%.2fRs\nRate of interest(in percentage):%.2f\nTime period(in years):%.2f\nThe simple interest would be:%.2fRs\n",p,r,t,interest);
    return 0;
}
