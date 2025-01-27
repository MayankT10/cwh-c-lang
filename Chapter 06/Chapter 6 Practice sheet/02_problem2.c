// 2. Write a program having a variable ‘i’. Print the address of ‘i’.
// Pass this variable to a function and print its address. 
// Are these addresses same? Why?

#include<stdio.h>
void returning_address(int* i) {
    printf("The address is %p\n",i);
    printf("The value is %d\n",*i);
}

int main() {
    int i = 10;
    int* j = &i;
    printf("The address of i is %p\n",&i);
    returning_address(&i);
    return 0;
}

// Yes the address are same because the returning_address function recieves the address of the variable i from the main.
// so now the function can access the exact same memory location where the variable is stored
// it does not create a new copy of variable , it directly uses the original address