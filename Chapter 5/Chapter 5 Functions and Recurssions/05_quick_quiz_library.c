// Quick Quiz: Use the library function to calculate the area of a square with
// side a.

#include <math.h>
#include <stdio.h>

int main() {
  int a;
  printf("Enter the value of a:");
  scanf("%d", &a);
  printf("\nThe area of this square is %f\n", pow(a, 2));
  return 0;
}
