/*

The program is a game of tic-tac-toe.

For more information read the README.md

Author: cla1rvoyant
12.08.2024
Version: 1.2

*/

#include <stdio.h>

int main()
{
    char field[3][3] = {{42, 42, 42}, {42, 42, 42}, {42, 42, 42}};
    int agree;

    puts("Salute! It's a game called tic-tac-toe, do you want to play? [1/0]");
    scanf("%d", &agree);

    while (1)
    {
        if (agree == 1)
        {
            puts("Do you know the rules of the game? [1/0]");
            scanf("%d", &agree);

            if (agree == 0)
            {
                puts("This game has two players. The first player moves with zeroes, the second - with crosses. The task of both players is to line up three of their pieces either in a straight line or diagonally on the field. Whoever did it is the winner.\n");
                continue;
            }

            printf("\n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++) printf("%c ", field[i][j]);
                printf("\n");
            }
            printf("\n");

            while (1)
            {
                if (agree == 1)
                {
                    int zeros_line;
                    int zeros_column;

                    puts("You are the first player, so you play with zeros. Go!");

                    printf("Line: ");
                    scanf("%d", &zeros_line);

                    printf("Column: ");
                    scanf("%d", &zeros_column);

                    if (zeros_line > 3 || zeros_column > 3)
                    {
                        printf("You have exceeded the current number of lines or columns!\n\n");
                        continue;
                    }

                    if (field[zeros_line - 1][zeros_column - 1] == 48 || field[zeros_line - 1][zeros_column - 1] == 88)
                    {
                        printf("There's already a sign here!\n\n");
                        continue;
                    }

                    field[zeros_line - 1][zeros_column - 1] = 48;

                    printf("\n");
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++) printf("%c ", field[i][j]);
                        printf("\n");
                    }
                    printf("\n");

                    int flag;
                    for (int i = 0; i < 3; i++)
                    {
                        if (field[i][0] == 48 && field[i][1] == 48 && field[i][2] == 48)
                        {
                            printf("The first player wins! Congratulations!\n\n");
                            flag = 1;
                        }

                        if (field[0][i] == 48 && field[1][i] == 48 && field[2][i] == 48)
                        {
                            printf("The first player wins! Congratulations!\n\n");
                            flag = 1;
                        }
                    }
                    if (flag == 1) break;

                    if (field[0][0] == 48 && field[1][1] == 48 && field[2][2] == 48)
                    {
                        printf("The first player wins! Congratulations!\n\n");
                        break;
                    }

                    if (field[0][2] == 48 && field[1][1] == 48 && field[2][0] == 48)
                    {
                        printf("The first player wins! Congratulations!\n\n");
                        break;
                    }

                    while (1)
                    {
                        int crosses_line;
                        int crosses_column;

                        puts("You are the second player, so you play with crosses. Go!");

                        printf("Line: ");
                        scanf("%d", &crosses_line);

                        printf("Column: ");
                        scanf("%d", &crosses_column);

                        if (crosses_line > 3 || crosses_column > 3)
                        {
                            printf("You have exceeded the current number of lines or columns!\n\n");
                            continue;
                        }

                        if (field[crosses_line - 1][crosses_column - 1] == 48 || field[crosses_line - 1][crosses_column - 1] == 88)
                        {
                            printf("There's already a sign here!\n\n");
                            continue;
                        }
                
                        field[crosses_line - 1][crosses_column - 1] = 88;

                        printf("\n");
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++) printf("%c ", field[i][j]);
                            printf("\n");
                        }
                        printf("\n");
                        break;
                    }

                    for (int i = 0; i < 3; i++)
                    {
                        if (field[i][0] == 88 && field[i][1] == 88 && field[i][2] == 88)
                        {
                            printf("The second player wins! Congratulations!\n\n");
                            flag = 1;
                        }

                        if (field[0][i] == 88 && field[1][i] == 88 && field[2][i] == 88)
                        {
                            printf("The second player wins! Congratulations!\n\n");
                            flag = 1;
                        }
                    }
                    if (flag == 1) break;

                    if (field[0][0] == 88 && field[1][1] == 88 && field[2][2] == 88)
                    {
                        printf("The second player wins! Congratulations!\n\n");
                        break;
                    }

                    if (field[0][2] == 88 && field[1][1] == 88 && field[2][0] == 88)
                    {
                        printf("The second player wins! Congratulations!\n\n");
                        break;
                    }
                }
            }
        }
        else return 0;
        
        puts("Do you want to play again? [1/0]");
        scanf("%d", &agree);

        if (agree == 1)
        {
            for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) field[i][j] = 42;
        }

        else break;
    }
}