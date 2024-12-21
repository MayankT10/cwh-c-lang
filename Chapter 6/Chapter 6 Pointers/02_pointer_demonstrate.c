#include<stdio.h>

int main() {
    int i = 20;
    int* j = &i;
    printf("address of i is %u\n",&i);
    printf("address of i is %u\n",j);
    printf("address of j is %u\n",&j); // &j != j or *j
    printf("value of i is %d\n",i);
    printf("value of i is %d\n",*(&i));
    printf("value of i is %d\n",*j);
    return 0;


}