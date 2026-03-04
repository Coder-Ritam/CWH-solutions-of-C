#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Simple Number Guessing game*/

int random_gen();
void guess_game(int ran);

int main(){
    int die_roll = random_gen();
        guess_game(die_roll);
    return 0;
}

// Generates Random number between 1 and 9
int random_gen()
{
    srand(time(NULL));
    int die_roll = (rand() % 9) + 1;

    return die_roll;
}

// logic for guessing game
void guess_game(int ran)
{
    int count = 0;
    int guess;
    int die_roll = ran;
    do
    {
        printf("enter a number between 1 and 9\n");
        scanf("%d", &guess);
        count++;
        if (guess == die_roll)
        {
            printf("right guess in %d tries\n", count);
        }
        else if (guess < die_roll)
        {
            printf("Too low Number\n");
        }
        else
        {
            printf("Too high Number\n");
        }
    } while (guess != die_roll);
}