#include <iostream>
#include <vector>
using namespace std;

// Hàm đếm số mìn xung quanh ô (x, y)
int countMines(const vector<vector<int> >& board, int x, int y, int m, int n) {
    int mineCounts = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int newX = x + i;
            int newY = y + j;
            if (newX >= 0 && newX < m && newY >= 0 && newY < n && !(i == 0 && j == 0)) {
                if (board[newX][newY] == -1) mineCounts++;
            }
        }
    }
    return mineCounts;
}
//ACHTUNG!

int main() {
    int m, n;
    cin >> m >> n;

    // Khai báo vector để chứa bản đồ mìn
    vector<vector<char> > a(m, vector<char>(n));
    vector<vector<int> > res(m, vector<int>(n, 0));

    // Nhập dữ liệu bản đồ mìn
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '*') {
                res[i][j] = -1; // Đánh dấu vị trí có mìn bằng -1
            }
        }
    }

    // Điền dữ liệu vào bảng kết quả
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (res[i][j] != -1) {
                res[i][j] = countMines(res, i, j, m, n);
            }
        }
    }

    // In ra bảng kết quả
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (res[i][j] == -1) {
                cout << '*';
            } else {
                cout << res[i][j];
            }
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
