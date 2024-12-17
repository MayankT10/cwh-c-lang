// while check for the condition first and then exceutes
// but do while loop first excutes and then checks the condition
// atleast executes the code block atleast once before checking the condition.
// do while loop syntax
// do {
//      code;
// } while(condition);

#include<stdio.h>

int main() {
	int num = 1;
	do {
		printf("Number is %d\n",num++);
		//num++;
	} while (num>5); // it prints Number:1 if the condition is False
	return 0;
}
