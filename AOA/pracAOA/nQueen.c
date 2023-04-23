#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int board[20], count=0;

int is_safe(int row, int column) {
    int i;
    for (i = 0; i < row; i++) {
        if (board[i] == column || abs(board[i] - column) == abs(i - row)) {
            return 0;
        }
    }
    return 1;
}

void print_solution(int n) {
    int i, j;
    printf("Solution %d:\n", ++count);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (board[i] == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
}

void n_queens(int n, int row) {
    int column;
    for (column = 0; column < n; column++) {
        if (is_safe(row, column)) {
            board[row] = column;
            if (row == n - 1) {
                print_solution(n);
            } else {
                n_queens(n, row + 1);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of queens: ");
    scanf("%d", &n);
    n_queens(n, 0);
    return 0;
}
