// 2. Write a function to convert Celsius temperature into Fahrenheit.


#include<stdio.h>
float c_to_f(float);

float c_to_f(float celsius) {
    // float fahrenheit;
    return ((9*celsius)/5) + 32;
}

int main() {
    float a;
    printf("Enter the temperature in celsius:");
    scanf("%f",&a);
    printf("\nThe temperature in fahrenheit is %.2f\n",c_to_f(a));
    return 0;
}