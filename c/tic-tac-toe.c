// A challenge to create a Tic Tac Toe game in C without using arrays.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	
    char player; // Variable for player control.
    int move_number; // Variable for counting the number of moves.
    int won; // Variable flag to define if the player won.
    int exists = 0; // Flag variable to define if a move is possible.
    char again = '1'; // Flag variable to define if another game will occur.
    char position; // Variable that chooses the position to be filled.
    char a='-', b='-', c='-', d='-', e='-', f='-', g='-', h='-', i='-'; // Board position variables and their initializations.

    printf ("\n============================================");
    printf ("\n============== TIC TAC TOE ===============");
    printf ("\n============================================");
    printf ("\n\nPlayer 01 -> [O]          Player 02 -> [X]");
    printf ("\n\n====== Board ====== Tic Tac Toe ======");
    printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
    printf ("\n      ___|___|___        ___|___|___ ");
    printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
    printf ("\n      ___|___|___        ___|___|___ ");
    printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
    printf ("\n         |   |              |   |    ");
    printf ("\n============================================");

    do { // Beginning and replay of the game.
        a = '-'; // Initialization of position variables and control flags.
        b = '-';
        c = '-';
        d = '-';
        e = '-';
        f = '-';
        g = '-';
        h = '-';
        i = '-';
        move_number = 1;
        won = 0;

        do{ // Choose which player to start.
            printf ("\n\nWhich player will start the game (1 or 2)? ");
                scanf (" %c", &player);
            if ((player != '1') && (player != '2')){
                printf ("\nInvalid player, select again!\n");
            }
        } while ((player != '1') && (player != '2'));
        system("cls");

        do { // Player switching
            if (player == '1'){ // Performs player 1 actions
                do{ // Entry of position to be played
                    printf ("\n\n============================================");
                    printf ("\n============== MOVEMENT NUMBER %d =============", move_number);
                    printf ("\n============================================");
                    printf ("\n\n====== Board ====== Tic Tac Toe ======");
                    printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
                    printf ("\n      ___|___|___        ___|___|___ ");
                    printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
                    printf ("\n      ___|___|___        ___|___|___ ");
                    printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
                    printf ("\n         |   |              |   |    ");
                    printf ("\n\n============================================");
                    printf ("\nPlayer 01 [O] - Choose your move: ");
                        scanf (" %c", &position);
                    position = toupper(position); // Defaults the variable so no errors occur.
                        switch (position){ // Put O in the chosen position.
                            case 'A':
                                if ((a == 'X') || (a == 'O')){ // Checks if the variable is already busy, if yes, issues error message.
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    a = 'O';
                                    exists = 1;
                                }
                                break;
                            case 'B':
                                if ((b == 'X') || (b == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    b = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'C':
                                if ((c == 'X') || (c == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    c = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'D':
                                if ((d == 'X') || (d == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    d = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'E':
                                if ((e == 'X') || (e == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    e = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'F':
                                if ((f == 'X') || (f == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    f = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'G':
                                if ((g == 'X') || (g == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    g = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'H':
                               if ((h == 'X') || (h == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    h = 'O';
                                    exists = 1;
                                    }
                                    break;
                            case 'I':
                                if ((i == 'X') || (i == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    i = 'O';
                                    exists = 1;
                                    }
                                    break;
                            default: printf ("\nPosition filled!"); // If the user enters any non-existent position, issues error warning.
                                exists = 0;
                        }
                } while (exists != 1);

            // The if below check if player made a sequence of 3, if yes ends the toggle loop, ending the game.
            if ((a=='O' && (a==b && a==c)) || (d=='O' && (d==e && d==f)) || (g=='O' && (g==h && g==i)) || (a=='O' && (a==d && a==g)) || (b=='O' && (b==e && b==h)) || (c=='O' && (c==f && c==i)) || (a=='O' && (a==e && a==i)) || (c=='O' && (c==e && c==g))){
                system("cls");
                printf ("\n\n====== Board ====== Tic Tac Toe ======");
                printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
                printf ("\n         |   |              |   |    ");
                printf ("\n\n============================================");
                printf ("\n===== RESULT: PLAYER 1 [O] WINS! =====");
                won = 1;
                break;
            }

            if(move_number >= 9){ // If after the maximum number of plays no one wins, the result is a draw.
                system("cls");
                printf ("\n\n====== Board ====== Tic Tac Toe ======");
                printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
                printf ("\n         |   |              |   |    ");
                printf ("\n\n============================================");
                printf ("\n============ RESULT: DRAW =============");
                break;
            }
            move_number++;
            player = '2';
            system("cls");
            }

            if (player == '2'){
                do{
                    printf ("\n\n============================================");
                    printf ("\n============== MOVEMENT NUMBER %d =============", move_number);
                    printf ("\n============================================");
                    printf ("\n\n====== Board ====== Tic Tac Toe ======");
                    printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
                    printf ("\n      ___|___|___        ___|___|___ ");
                    printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
                    printf ("\n      ___|___|___        ___|___|___ ");
                    printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
                    printf ("\n         |   |              |   |    ");
                    printf ("\n\n============================================");
                    printf ("\Player 02 [X] - Choose your move: ");
                        scanf (" %c", &position);
                    position = toupper(position);
                        switch (position){
                            case 'A':
                                if ((a == 'X') || (a == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    a = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'B':
                                if ((b == 'X') || (b == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    b = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'C':
                                if ((c == 'X') || (c == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    c = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'D':
                                if ((d == 'X') || (d == 'O')){
                                   printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    d = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'E':
                                if ((e == 'X') || (e == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    e = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'F':
                                if ((f == 'X') || (f == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    f = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'G':
                                if ((g == 'X') || (g == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    g = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'H':
                               if ((h == 'X') || (h == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    h = 'X';
                                    exists = 1;
                                    }
                                    break;
                            case 'I':
                                if ((i == 'X') || (i == 'O')){
                                    printf ("\nInvalid move, position filled!\n");
                                    exists = 0;
                                } else{
                                    i = 'X';
                                    exists = 1;
                                    }
                                    break;
                            default: printf ("\nPosition filled!");
                                exists = 0;
                        }
                } while (exists != 1);

            if ((a=='X' && (a==b && a==c)) || (d=='X' && (d==e && d==f)) || (g=='X' && (g==h && g==i)) || (a=='X' && (a==d && a==g)) || (b=='X' && (b==e && b==h)) || (c=='X' && (c==f && c==i)) || (a=='X' && (a==e && a==i)) || (c=='X' && (c==e && c==g))){
                system("cls");
                printf ("\n\n====== Board ====== Tic Tac Toe ======");
                printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
                printf ("\n         |   |              |   |    ");
                printf ("\n\n============================================");
                printf ("\n===== RESULT: PLAYER 2 [X] WINS! =====");
                won = 1;
                break;
            }

            if(move_number >= 9){
               	system("cls");
                printf ("\n\n====== Board ====== Tic Tac Toe ======");
                printf ("\n\n       A | B | C          %c | %c | %c ", a, b, c);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       D | E | F          %c | %c | %c ", d, e, f);
                printf ("\n      ___|___|___        ___|___|___ ");
                printf ("\n       G | H | I          %c | %c | %c ", g, h, i);
                printf ("\n         |   |              |   |    ");
                printf ("\n\n============================================");
                printf ("\n============ RESULT: DRAW =============");
                break;
            }
            move_number++;
            player = '1';
            system("cls");
            }

        }while (won != 1); // Toggles until a player wins or a tie occurs.

        do{
            printf ("\n\nWould you like to play again? (1-Yes or 2-No) "); // Checks if the player wants to play again, if yes, restarts the game, otherwise ends.
                scanf (" %c", &again);
            if ((again != '1') && (again != '2')){
                printf ("\nChoose invalid, select again!\n");
            }
        } while ((again != '1') && (again != '2'));
        system("cls");
    }while (again != '2');

return 0;
}
