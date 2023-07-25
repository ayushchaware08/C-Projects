// create a rock paper sessior game
// player 1: rock
// player 2 (computer) : scissors  --->P1 gets 1 point
// rock vs scissor > rock wins
// scissor vs paper > scissors wins
// paper vs rock > paper wins
// write a program  to allow1s user to play this game three time with computer.
// calculate the score of the player 1 and player 2
// and announce the winner
// Note: you have to display the name of the player durin the game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    // strands take speed and it is defined inside stdio.h
    return rand() % n;
}
int greater (char char1, char char2)
{
    // for rock paper scissor
    // return 1 if char1>char2 and 0 otherwise. if c1=c2 it will return -1
    if (char1 == char2)
    {
       return 1;
    }

    // paper vs scissor
    if((char1 == 'p') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 0;
    }

    // rock vs paper
    else if((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 0;
    }

    // rock vs scissor
    else if((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }

    else if ((char1 == 's') && (char2 == 'r'))
    {
        return 0;
    }
}
int main()
{
    int p1score = 0, p2score = 0, temp;
    char p1char, p2char;
    char dict[] = {'r','p', 's'};
    printf("Welcome to this GAME!!!\n\n");
    for (int i = 0; i < 3; i++)
    {
        // PLAYER 1's turn (INPUT)
        printf("Choose 1 for ROCK, 2 for PAPER and 3 for SCISSOR\n");
        printf("Player 1's Turn : \n");
        scanf("%d", &temp);
        getchar();
        p1char = dict[temp - 1];
        printf("You Choose %c\n\n",p1char);

        // COMPUTER's turn (INPUT)
        printf("Computer's Turn : \n");
        temp = generaterandomnumber(3) + 1;
        p2char = dict[temp - 1];
        printf("CPU Choose %c\n\n",p2char);

        // To decide a score
        if (greater(p2char, p1char) == 1)
        {
            p2score += 1;
            printf("CPU got it!\n\n");
        }
        else if (greater(p2char, p1char) == -1)
        {
            p1score += 1;
            p2score += 1;
            printf("Its a draw\n\n");
        }
        else
        {
            p1score = +1;
            printf("You got it\n\n");
        }
        printf("Your score    : %d \nComputer Score : %d \n",p1score,p2score);
    }
    if (p1score>p2score)
    {
        printf("YOU WIN  :)\n");
    }
    else if (p1score<p2score)
    {
        printf("YOU LOSE :(\n");
    }
    else 
    {
        printf("It's a draw");
    }
    
    // printf("The random number between 0 to 5 is %d \n", generaterandomnumber(2));
    return 0;
}