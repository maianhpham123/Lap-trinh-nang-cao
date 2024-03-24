#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Ghi tràn dòng đầu tiên của mảng
    for (int j = 0; j <= 5; j++) {
        arr[0][j] = 0; // Ghi tràn dòng đầu tiên
    }

    // In đầy đủ mảng ra màn hình
    cout << "Mảng sau khi ghi tràn:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Về cấu trúc vật lý của mảng hai chiều, 
mảng hai chiều thực chất là một mảng một chiều mà mỗi phần tử 
trong mảng là một mảng một chiều khác. Cụ thể trong trường hợp 
này, mảng arr là một mảng hai chiều có 3 hàng và 4 cột, 
tức là một mảng gồm 3 phần tử mà mỗi phần tử là một mảng 4 phần tử. 
Cấu trúc vật lý của mảng hai chiều sẽ liên tục trong bộ nhớ, 
mỗi hàng của mảng sẽ được lưu trữ liên tiếp trong bộ nhớ.
*/
