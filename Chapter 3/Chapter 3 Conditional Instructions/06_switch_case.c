#include<stdio.h>

int main() {
	int a;
	printf("Enter a value:");
	scanf("%d",&a);

	switch(a) {
		case 1:
			printf("You have entered 1\n");
		case 2:
			printf("You have entered 2\n");
		case 3: 
			printf("You have entered 3\n");
		case 4:
			printf("You have entered 4\n");
		default:
			printf("Nothing matched");
		 
	}
	return 0;
}
