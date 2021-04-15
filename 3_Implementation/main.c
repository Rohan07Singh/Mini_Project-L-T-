#include <stdio.h>
#include <conio.h>

char grid[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int winning();
void board();

int main()
{
    int player = 1, i, choice;

    char select;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        select = (player == 1) ? 'X' : 'O';

        if (choice == 1 && grid[1] == '1')
            grid[1] = select;
            
        else if (choice == 2 && grid[2] == '2')
            grid[2] = select;
            
        else if (choice == 3 && grid[3] == '3')
            grid[3] = select;
            
        else if (choice == 4 && grid[4] == '4')
            grid[4] = select;
            
        else if (choice == 5 && grid[5] == '5')
            grid[5] = select;
            
        else if (choice == 6 && grid[6] == '6')
            grid[6] = select;
            
        else if (choice == 7 && grid[7] == '7')
            grid[7] = select;
            
        else if (choice == 8 && grid[8] == '8')
            grid[8] = select;
            
        else if (choice == 9 && grid[9] == '9')
            grid[9] = select;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = winning();

        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}
int winning()
{
    if (grid[1] == grid[2] && grid[2] == grid[3])
        return 1;
        
    else if (grid[4] == grid[5] && grid[5] == grid[6])
        return 1;
        
    else if (grid[7] == grid[8] && grid[8] == grid[9])
        return 1;
        
    else if (grid[1] == grid[4] && grid[4] == grid[7])
        return 1;
        
    else if (grid[2] == grid[5] && grid[5] == grid[8])
        return 1;
        
    else if (grid[3] == grid[6] && grid[6] == grid[9])
        return 1;
        
    else if (grid[1] == grid[5] && grid[5] == grid[9])
        return 1;
        
    else if (grid[3] == grid[5] && grid[5] == grid[7])
        return 1;
        
    else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3' &&
        grid[4] != '4' && grid[5] != '5' && grid[6] != '6' && grid[7] 
        != '7' && grid[8] != '8' && grid[9] != '9')

        return 0;
    else
        return  - 1;
}
void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", grid[1], grid[2], grid[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", grid[4], grid[5], grid[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", grid[7], grid[8], grid[9]);

    printf("     |     |     \n\n");
}
