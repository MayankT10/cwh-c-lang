// 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

#include <stdio.h>

int main() {
  int a = 4;
  printf("%d %d %d \n", a, ++a, a++);
  // if the evalution order is not determined then the compiler determines
  // itself Both the answers are correct 4 5 5 ( from left ) 6 6 5 ( from right
  // )
  return 0;
}
