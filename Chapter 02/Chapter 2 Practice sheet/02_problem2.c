// 2. What data type will 3.0/8 – 2 return?

#include<stdio.h>

// int main() {
//     int int_data = 3.0/8 -2;
//     float float_data = 3.0/8 - 2;
//     printf("Value of integer data with using percent d %d\n",int_data);
//     printf("Value of integer data with using percent f %f\n",int_data);
//     printf("Value of float data with using percent d %d\n",float_data);
//     printf("Value of float data with using percent f %f\n",float_data);
//     return 0;
// }

// float / integer = float
// float - integer = float 

int main() {
   float a = 3.0/8 -2;
   printf("The value of a is %f\n",a);
   return 0;
}


// %.2f can be used to display only upto two decimal places