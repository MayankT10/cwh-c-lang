#include<stdio.h>

int main() {
    char *ptr = "abc";
    // once a string defined using char st[] = "abc";
    // it cannot be reinitialized to something else
    // whereas a string defined by pointer can be reintilialized ( by ptr = "efg"; )

    puts(ptr);
    
    return 0;

}