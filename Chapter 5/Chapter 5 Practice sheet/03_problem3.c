// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2

#include<stdio.h>

float force(float);

float force(float mass) {
    return mass * 9.8;
}

int main() {
    float m;
    printf("Enter mass of body(in kg):");
    scanf("%f",&m);
    printf("The force of attraction on a body of mass %.2f is %.2f N\n",m,force(m));
    return 0;
}