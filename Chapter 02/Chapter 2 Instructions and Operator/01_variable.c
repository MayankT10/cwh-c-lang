#include <stdio.h>

int main() {
    int a; // declaring integer variable
    int b; // declaring float variable
    a = 2 ,b = 12 ; // intializing a with 2 and b with 12

    int i = 10; // declaring and initializing i with 10
    int j = 2; // declaring and initializing j with 2
    
    float c = 5 , d = 13; // Declaring and initializing multiple variables

    int j1 = a + j - 1 ; // Using previously defined variables

    // %d is format specifier
    // %d is for int
    // %f is for float
    // %c is for char 

    printf("The value of i is %d and value of j is %d\n",i,j);
    printf("The value of a is %d and value of b is %d\n",a,b);
    printf("The value of c is %f and value of d is %.2f\n",c,d);
    return 0;
}
