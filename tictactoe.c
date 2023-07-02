#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void reset_board();
void print_board();
int check_free_space();
void player_move();
void computer_move();
char check_winner();
void print_winner(char winner);

int main() {
    char winner = ' ';
    reset_board();

    while (winner == ' ' && check_free_space() != 0) {
        print_board();
        player_move();
        winner = check_winner();
        if (winner != ' ' || check_free_space == 0) {
            break;
        }

        computer_move();
        winner = check_winner();
        if (winner != ' ' || check_free_space == 0) {
            break;
        }
    }

    // when game is ending whatever result is.
    print_board();
    print_winner(winner);

    return 0;
}

void reset_board() {
    for (int row_idx=0; row_idx<3; row_idx++) {
        for (int col_idx=0; col_idx<3; col_idx++) {
            board[row_idx][col_idx] = ' ';
        }
    }
}
void print_board(){
    for (int row_idx = 0; row_idx < 3; row_idx++ ) {
        printf(" %c | %c | %c ", board[row_idx][0], board[row_idx][1], board[row_idx][2]);
        printf("\n---|---|---\n");
    }
}
int check_free_space(){
    int free_spaces = 9;
    for (int row_idx = 0; row_idx < 3; row_idx ++ ) {
        for (int col_idx = 0; col_idx < 3; col_idx ++) {
            if (board[row_idx][col_idx] != ' ') {
                free_spaces--;
            }
        }
    }
}
void player_move(){
    int x;
    int y;

    do {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        
        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;
        if (board[x][y] != ' ') {
            printf("invalid move!");
        } 
        else {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}
void computer_move(){
    // random seed number
    srand(time(0));
    int x;
    int y;
    if (check_free_space() > 0) {
        while (board[x][y] != ' ') {
            x = rand() % 3 ;
            y = rand() % 3 ;
        }
        board[x][y] = COMPUTER;
    }
    else {
        print_winner(' ');
    }
}
char check_winner(){
    // check rows: horizontal
    for (int row_idx = 0; row_idx < 3; row_idx ++ ) {
        if (board[row_idx][0] == board[row_idx][1] && board[row_idx][0] == board[row_idx][2]) {
            return board[row_idx][0];
        }
    }
    // check column: vertical
    for (int col_idx = 0; col_idx < 3; col_idx ++ ) {
        if (board[0][col_idx] == board[1][col_idx] && board[0][col_idx] == board[2][col_idx]) {
            return board[0][col_idx];
        }
    }
    // check diagonal left
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return board[0][2];
    }

    return ' ';
}
void print_winner(char winner){
    if (winner == PLAYER) {
        printf("YOU WIN!");
    }
    else if (winner == COMPUTER) {
        printf("YOU LOSE!");
    }
    else {
        printf("TIE!");
    }
}