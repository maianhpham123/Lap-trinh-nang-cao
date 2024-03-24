#include <iostream>
using namespace std;
int arr1[5];

int main() {
    // Khai báo mảng trong hàm main
    int arr2[5];

    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    
    return 0;
}
