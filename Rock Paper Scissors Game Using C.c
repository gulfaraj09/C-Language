#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int genraterandomnumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is definde inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    // For rock scissors - Return 1 if c1 > c2 and 0 otherwise. if c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    
    int playerScore = 0, computerScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock , Peper , Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input

        printf("Player 1's turn\n");
        printf("Choose 1 for rock, 2 for paper and 3 for scissor.\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        // Take player 1's input

        printf("Computer's turn\n");
        //printf("Choose 1 for rock, 2 for paper and 3 for scissor.\n");
        temp = genraterandomnumber(3) + 1;
        compChar = dict[temp - 1];
        printf("computer choose %c\n\n", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            computerScore += 1;
            printf("Computer Got It !\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            computerScore += 1;
            playerScore += 1;
            printf("Its a draw !\n\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got It !\n\n");
        }
        printf("You: %d\nComputer: %d\n\n", playerScore, computerScore);
    }

    if (playerScore > computerScore)
    {
        printf("You win the game .\n");
    }
    else if (playerScore < computerScore)
    {
        printf("Computer win the game .\n");
    }
    else
    {
        printf("Its a draw .\n");
    }

    return 0;
}
