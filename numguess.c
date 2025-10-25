#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int no_of_Guesses = 0;
    int guessed;
    
    do
    {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guessed);
        if(guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if(guessed < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it right!\n");
        } 
        no_of_Guesses++;
    } while (guessed != randomNumber);
    
    printf("You guessed it in %d attempts!\n", no_of_Guesses);

    return 0;
}

