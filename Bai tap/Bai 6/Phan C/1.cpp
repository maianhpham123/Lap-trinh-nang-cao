#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateBoard(vector<vector<char> >& board, int m, int n, int K) {
    srand(time(0)); // Seed for random number generation
    int placedMines = 0;
    
    while (placedMines < K) {
        int x = rand() % m;
        int y = rand() % n;
        if (board[x][y] == '*') continue; // Mine already placed here, try again
        board[x][y] = '*';
        placedMines++;
    }
}

bool isValid(int x, int y, int m, int n) {
    return x >= 0 && x < m && y >= 0 && y < n;
}

//the number of mines in 8 surrounding cells
int countMines(const vector<vector<char> >& board, int x, int y, int m, int n) {
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            //must have this
            int nx = x + i, ny = y + j;
            if (isValid(nx, ny, m, n) && board[nx][ny] == '*') {
                count++;
            }
        }
    }
    return count;
}

void printBoard(const vector<vector<char> >& board, const vector<vector<bool> >& revealed, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (revealed[i][j]) {
                if (board[i][j] == '*') {
                    cout << '*';
                } else {
                    cout << countMines(board, i, j, m, n);
                }
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

void revealAllMines(vector<vector<char> >& board, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == '*') {
                cout << '*';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

int main() {
    int m, n, K;
    cout << "Enter dimensions (m n) and number of mines (K): ";
    cin >> m >> n >> K;

    vector<vector<char> > board(m, vector<char>(n, '.'));
    vector<vector<bool> > revealed(m, vector<bool>(n, false));

    generateBoard(board, m, n, K);

    while (true) {
        int x, y;
        cout << "Enter coordinates to reveal (x y): ";
        cin >> x >> y;

        if (!isValid(x, y, m, n)) {
            cout << "Invalid coordinates. Try again." << endl;
            continue;
        }

        if (board[x][y] == '*') {
            cout << "YOU'RE DEAD!" << endl;
            revealAllMines(board, m, n);
            break;
        } else {
            revealed[x][y] = true;
            printBoard(board, revealed, m, n);
        }
    }

    return 0;
}

//need to review
