#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

char player1 = 'X';
char player2 = 'O';
char currentPlayer = player1;

void printBoard() {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkWin() {
    int i, j;

    // Check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
    }

    // Check columns
    for (j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }

    return 0;
}

int main() {
    int row, col, move;

    printf("Jogo da Velha!\n");

    do {
        printBoard();

        printf("Jogador %c, escolha um número de 1 a 9: ", currentPlayer);
        scanf("%d", &move);

        row = (move - 1) / 3;
        col = (move - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = currentPlayer;
            if (currentPlayer == player1) {
                currentPlayer = player2;
            } else {
                currentPlayer = player1;
            }
        } else {
            printf("Movimento inválido! Tente novamente.\n");
        }
    } while (!checkWin() && move < 9);

    printBoard();

    if (checkWin()) {
        printf("Jogador %c ganhou!\n", currentPlayer == player1 ? player2 : player1);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
