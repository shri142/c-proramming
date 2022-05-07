#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genreatrandomno(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
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
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'R', 'P', 'S'};

    printf("\n\n\t\t\t\t\t\t\t\t~~~~ welcome to the ROCK ,PAPER, SCISSOR game ~~~~\n\n\n");

    printf("choose 1 for ROCK, 2 for PAPER and 3 for SCISSOR\n\n");

    for (int i = 0; i < 3; i++)
    {

        printf("your's turn: ");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("you choose %c\n\n", playerchar);

        printf("computer's turn: \n");
        temp = generaterandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("computer choose %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("**computer win this round**\n\n");
        }

        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("**this round is darw**\n\n");
        }

        else
        {
            playerscore += 1;
            printf("**you win this round**\n\n");
        }

        printf("## your score = %d | computer score = %d ##\n\n", playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("CONGRATULATION!\n");
        printf("YOU WIN \n\n");
    }
    else if (playerscore < compscore)
    {
        printf("OH! SO SORRY \n");
        printf("COMPUTER WIN \n\n");
    }
    else
    {
        printf("OH! OH!\n");
        printf("IT IS DRAW \n\n");
    }

    return 0;
}
    