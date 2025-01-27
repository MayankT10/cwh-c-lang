// 4. What can be done using one type of loop can also be done using the other two types of loops – true or false?

// True , any task can be done using any of the three loops (for,while and do-while loop)


#include<stdio.h>

int main() {
    int i;
    // using for loop
    printf("using for loop\n");
    for (i=1;i<=5;i++) {
        printf("%d\n",i);
    }

    // using while loop
    i =1;
    printf("\nusing while loop\n");
    while(i<=5){
        printf("%d\n",i);
        i++;
    }

    // using do while loop
    i= 1;
    printf("\nusing do while loop\n");
    do {
        printf("%d\n",i++);
    } while(i<=5);
    return 0;
}