#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int> >& board, int row, int col, int n) {
    for (int i = 0; i < n; i++) {
        if (board[i][col] == 1 && i != row) return false; // same column
    }
    for (int i = 0; i < n; i++) {
        if(board[row][i] == 1 && i != col) return false; // same row
    }
    
    //left diagonal;
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }
    for (int i = row + 1, j = col + 1; i <n && j < n; i++, j++) {
        if (board[i][j] == 1) return false;
    }

    //right diagonal;
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) return false;
    }
    for (int i = row + 1, j = col - 1; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 1) return false;
    }
    return true;
}

void placeQueens(vector<vector<int> >& board, int row, int n, vector<vector<vector<int> > >& solutions) {
    //basic step:
    if (row == n) {
        solutions.push_back(board);
        return;
    }

    //inductive step:
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1;
            placeQueens(board, row + 1, n, solutions);
            board[row][col] = 0; // backtrack
        }
    }
}

int main() {
    int n = 5; // size of the board
    vector<vector<int> > board(n, vector<int>(n, 0));
    vector<vector<vector<int> > > solutions;

    placeQueens(board, 0, n, solutions);

    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            for (int cell : row) {
                cout << (cell == 1 ? "H " : ". ");
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}