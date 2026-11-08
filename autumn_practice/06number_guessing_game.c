#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_GUESSES 7
#define MAX_HISTORY 7
#define MIN_NUMBER 1
#define MAX_NUMBER 100
void play_one_game();
int main() {
    char play_again;
    srand(time(NULL));
    do {
    play_one_game();
    printf("\n");
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &play_again);
}
while (play_again == 'y' || play_again == 'Y');
printf("Thank you for playing! Goodbye!\n");
return 0;
}
void play_one_game(void) {
    int secret;
    int guess;
    int count;
    int history[MAX_HISTORY];
    secret = rand() % (MAX_NUMBER - MIN_NUMBER+1) + MIN_NUMBER;
    count = 0;
    printf("welcome to the number guessing game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n",MIN_NUMBER,MAX_NUMBER);
    while (count < MAX_GUESSES) {
        printf("This is your %d guess.\n", count + 1);
        printf("Please enter your guess: ");
        if (scanf("%d",&guess)!=1){
            printf("Invalid input! Please enter a valid number.\n");
            while(getchar() != '\n');
            continue;
        }
        history[count] = guess;
        count++;
        if (guess < secret) {
            printf("Too low! Try again.\n");
        }
        else if (guess > secret) {
            printf("Too high! Try again.\n");
        }
        else {
            printf("Congratulations! You guessed the number!The number was %d.\n", secret);
            printf("It took you %d times to guess.\n ", count);
            break;
        }
    }
    if (count == MAX_GUESSES && guess != secret) {
        printf("Sorry you have lost! The number was %d.\n", secret);   
    }
    printf("Your guesses were: ");
    for (int i = 0; i < count; i++){
        printf("%d ", history[i]);
    }
printf("\n");
}

