//  When operators of equal priority are present then it follow
//  left to right 
//  x*y/z
//  for eg * / will follow left to right 
//  to avoid confusion use parenthesis



#include<stdio.h>

int main() {
    int x = 4 , y = 1 , z = 2;
    int opt1 = x*y/z;
    int opt2 = x/y*z;
    // Bothe are different
    printf("%d\n",opt1);
    printf("%d\n",opt2);
    return 0;
}