#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main()
{
    int n;
    int i = 0;
    char computer, user;

    // Seed the random number generator using the current time
    // This ensures the numbers are truly random every time you run the game
    srand(time(0));

    printf("Enter the number of rounds you want to play: \n");
    scanf("%d", &n);

    do
    {
        i++;
        
        // Generate a random number between 0 and 9 for EACH round
        int random = rand() % 10;
        
        if (random <= 3) {
            computer = 's';
        } else if (random >= 4 && random <= 7) {
            computer = 'w';
        } else {
            computer = 'g';
        }

        // This tells scanf to ignore whitespace and newline characters from previous inputs.
        printf("\nRound %d: Enter w for water, s for snake, g for gun: ", i);
        scanf(" %c", &user);

        // Game Logic
        if (user == computer)
        {
            printf("Tie! Computer also chose '%c'\n", computer);
        }
        else if ((user == 's' && computer == 'w') || 
                 (user == 'w' && computer == 'g') || 
                 (user == 'g' && computer == 's'))
        {
            printf("User wins! Computer chose '%c'\n", computer);
        }
        else if ((user == 'w' && computer == 's') || 
                 (user == 'g' && computer == 'w') || 
                 (user == 's' && computer == 'g'))
        {
            printf("Computer wins! Computer chose '%c'\n", computer);
        }
        else 
        {
            printf("Invalid input! Please enter 's', 'w', or 'g'.\n");
            i--; // Decrement 'i' so this invalid turn doesn't count towards the total rounds
        }
        
    } while (i < n);

    printf("\nGame Over! Thanks for playing.\n");

    return 0;
}
