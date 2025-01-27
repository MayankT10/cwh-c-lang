#include<stdio.h>

// int main() {
//     int a = 29;
//     if (a>18) 
//     {
//         printf("You are eligible to vote\n");
//     }
//     return 0;
// }


int main() {
    int a;
    printf("Enter your age in years:");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("You are elgibile to vote");
    }
    else if (0<a && a<18)
    {
        printf("You are not eligble to vote");
    }
    else
    {
        printf("Please enter a valid number");
    }
    return 0;
}
