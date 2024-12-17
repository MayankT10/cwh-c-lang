#include<stdio.h>

int main() {
    int i;
    while(i<10) {
        if (i==5) {
            i++;
            continue;
    }
    printf("%d\n",i);
    i++;
    } 
    return 0;

}

