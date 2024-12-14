// operator priority
// 1st priority is given to * / %
// 2nd priority is given to + - 
// 3rd priority is given to =  
// BODMAS rule is not considered here in c lang

#include <stdio.h>

int main() {
    int x = 2;
    int y = 1;
    int example1 = 3*x - 8*y;
    int example2 = (3 * x) - (8 * y);
    int example3 = 3 * ( x - 8 * y );
    printf("%d\n",example1);
    printf("%d\n",example2);
    printf("%d\n",example3); 
    
    return 0;
}


