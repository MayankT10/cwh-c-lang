// PROJECT 1: NUMBER GUESSING GAME
// We will write a program that generates a random number and asks the player to guess it.
// If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. 
// Similarly, if the user’s guess is too low, the program prints “Higher number please”.
// When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// Using fo while loop
int main() {
    
    srand(time(0));
    int num;
    int random_number =(rand()%100)+1;
    int guess_count =0;
        
        do {
            printf("Enter a number:");
            scanf("%d",&num);
            if(num>random_number) {
                printf("Lower number please\n");
            } else if (num<random_number) {
                printf("Higher number please\n");
            } else {
                printf("You guessed it right.\n");
            }
            guess_count++;
        } while(num!= random_number);
    
    printf("You have guessed the number in %d guesses\n",guess_count);
    return 0;
    
}




// Using while loop
// int main() {
//     //intializes random number generator
//     srand(time(0)); 
//     // Generates randon number between 1 and 100
//     int random_number = (rand() % 100) + 1;
//     // Prints random number
//     // printf("Random number is %d\n",random_number);

//     int num;
//     int guess_count=0;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     while(num>0) 
//     {
//     if (num==random_number) {
//         printf("You guessed the number right");
//         break;
//     } else if (num<random_number) {
//         printf("Number is lower\nGuess the number again:");
//         scanf("%d",&num);
//     } else if (num>random_number) {
//         printf("Number is higher\nGuess the number again:");
//         scanf("%d",&num);
//     } else {
//         printf("Enter a valid number.");
//     }
//     }
//     return 0;

// }