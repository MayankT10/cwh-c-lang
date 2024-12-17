// A CASE OF DECREMENTING FOR LOOP
// i is initialized to 5 
// condition i (0 or none) is tested
// The code is executed 
// Then it goes to for loop again and i is decremented
// condition i is checked and code is execute if i is not 0

#include<stdio.h>

int main() {
    int i;
    for (i=5;i;i--) {
        printf("%d\n",i);
    }
    return 0;
}

