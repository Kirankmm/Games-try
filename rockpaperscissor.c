#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *choices[] = { "Rock", "Paper", "Scissors" };
    int userChoice, computerChoice;
    srand(time(0));  // Seed for random number generation

    printf("Rock, Paper, Scissors Game!\n");
    printf("Enter your choice: 0 for Rock, 1 for Paper, 2 for Scissors: ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice.\n");
        return 0;
    }

    computerChoice = rand() % 3;  // Random choice for the computer

    printf("You chose %s. Computer chose %s.\n", choices[userChoice], choices[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
