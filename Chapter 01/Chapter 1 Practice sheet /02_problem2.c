// 2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>

int main() {
    int r = 6;
    int h = 10;
    printf("The area of circle with radius %d is %.2f",r,3.14*r*r);
    printf("\nVolume of cylinder with radius %d and height %d is %.2f ",r,h,3.14*r*r*h);
    return 0;
}

