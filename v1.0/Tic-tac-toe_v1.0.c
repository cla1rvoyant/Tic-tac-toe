/*

The program is a game of tic-tac-toe.

For more information read the README.md

Author: cla1rvoyant
01.03.2022
Version: 1.0

*/

#include <stdio.h>

int main()
{
    int field[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int agree;
    int agree2;
    int agree3;

    puts("Salute! It's a game called tic-tac-toe, do you want to play? [1/0]");
    scanf("%d", &agree);

    while (1)
    {
        if (agree == 1)
        {
            puts("Do you know the rules of the game? [1/0]");
            scanf("%d", &agree2);

            if (agree2 == 0)
            {
                puts("This game has two players. The first player moves with zeroes, the second - with crosses. The task of both players is to line up three of their pieces either in a straight line or diagonally on the field. Whoever did it is the winner.\n");

                continue;
            }

            for (int i = 0; i < 3; i++)
            {
                printf("\n");

                for (int j = 0; j < 3; j++)
                    printf("%d\t", field[i][j]);
                    
                printf("\n");
            }

            while (1)
            {
                if (agree2 == 1)
                {
                    int zeros_line;
                    int zeros_column;

                    puts("You are the first player, so you play with zeros. Go!");

                    printf("Line: ");
                    scanf("%d", &zeros_line);

                    printf("Column: ");
                    scanf("%d", &zeros_column);

                    if (field[zeros_line - 1][zeros_column - 1] == 0 || field[zeros_line - 1][zeros_column - 1] == 8)
                    {
                        printf("There's already a sign here!\n\n");
                        continue;
                    }

                    field[zeros_line - 1][zeros_column - 1] = 0;

                    for (int i = 0; i < 3; i++)
                    {
                        printf("\n");

                        for (int j = 0; j < 3; j++)
                            printf("%d\t", field[i][j]);
                    
                        printf("\n");
                    }

                    if (field[0][0] == 0 && field[0][1] == 0 && field[0][2] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[1][0] == 0 && field[1][1] == 0 && field[1][2] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[2][0] == 0 && field[2][1] == 0 && field[2][2] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][0] == 0 && field[1][0] == 0 && field[2][0] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][1] == 0 && field[1][1] == 0 && field[2][1] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][2] == 0 && field[1][2] == 0 && field[2][2] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][0] == 0 && field[1][1] == 0 && field[2][2] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][2] == 0 && field[1][1] == 0 && field[2][0] == 0)
                    {
                        printf("The first player wins! Congratulations!\n");
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

                        if (field[crosses_line - 1][crosses_column - 1] == 0 || field[crosses_line - 1][crosses_column - 1] == 8)
                            {
                                printf("There's already a sign here!\n\n");
                                continue;
                            }
                
                        field[crosses_line - 1][crosses_column - 1] = 8;

                        for (int i = 0; i < 3; i++)
                        {
                            printf("\n");

                            for (int j = 0; j < 3; j++)
                                printf("%d\t", field[i][j]);

                            printf("\n");
                        }
                        break;
                    }

                    if (field[0][0] == 8 && field[0][1] == 8 && field[0][2] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[1][0] == 8 && field[1][1] == 8 && field[1][2] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[2][0] == 8 && field[2][1] == 8 && field[2][2] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][0] == 8 && field[1][0] == 8 && field[2][0] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][1] == 8 && field[1][1] == 8 && field[2][1] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][2] == 8 && field[1][2] == 8 && field[2][2] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][0] == 8 && field[1][1] == 8 && field[2][2] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }

                    if (field[0][2] == 8 && field[1][1] == 8 && field[2][0] == 8)
                    {
                        printf("The second player wins! Congratulations!\n");
                        break;
                    }
                }
            }
        }
        else return 0;
        
        puts("Do you want to play again? [1/0]");
        scanf("%d", &agree3);

        if (agree3 == 1) continue;
        else break;
    }
}