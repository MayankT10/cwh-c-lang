#include<stdio.h>

int main() {
    int i = 50;
    int* j = &i;
    int **k = &j;
    printf("i = %p\n",i);
    printf("&i = %p\n",&i);
    printf("j = %p\n",j);
    printf("&j = %p\n",&j);
    printf("*j = %p\n",*j);
    printf("&k = %p\n",&k);
    printf("**k = %p\n",**k);
    printf("k = %p\n",k);
    printf("*k = %p\n",*k);
    return 0;

    // i gives the address of the value of it ( means gives address of 50 in this program)
    // &i gives address of pointer i 
    // j gives address of i because we earlier intiliazed j = &i
    // &j gives the address of the pointer j and not of i 
    // *j gives the address of the value of i 
    // &k gives the address of the pointer k and not of j
    // **k gives the address of the value of i (means gives address of 50 in this program , **k = i)
    // k gives the address of the pointer j (means gives same as &j)
    // *k gives the value stored at the address k and k points to j . j has address of i stored thus *k give the address of i (&i = *k)
  
}