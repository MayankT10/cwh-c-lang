// 3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

#include<stdio.h>

int main() {
    float celsius = 33.0;
    float farenheit;
    farenheit = celsius*(9.0/5.0) +32;
    printf("Temperatue from %.2f celsius would be %.2f in Farenheit\n",celsius,farenheit);
    return 0;
}