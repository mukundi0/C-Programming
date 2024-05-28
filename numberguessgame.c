#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 200;
    int guess; 
    int guesses;
    int answer; 
     

    //uses current time as a seed
    srand(time(0));

    //generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%i",&guess);
        if (guess > answer)
        {
            printf("TOO HIGH!\n");
        }
        else if (guess < answer)
        {
            printf("TOO LOW!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("*********************\n");
    printf("answer: %d\n",answer);
    printf("guesses: %d\n,",guesses);
    printf("*********************");
    
    return 0;
}