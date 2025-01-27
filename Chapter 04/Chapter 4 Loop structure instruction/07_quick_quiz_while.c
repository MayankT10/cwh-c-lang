//Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.

#include<stdio.h>

int main() {
	int num;
	int natural = 1;
	printf("Enter a number:");
	scanf("%d",&num);
	do {
		printf("%d\n",natural++);
		// natural++;
	} while(num>=natural);
	return 0;
}
