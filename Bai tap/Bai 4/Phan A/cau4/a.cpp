#include <iostream>
using namespace std;

int main() {
    char var1 = 'x';
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char var2 = 'y';

    cout << "Truy cập các phần tử mảng có chỉ số -1, 5, 6:" << endl;
    cout << "arr[-1] = " << arr[-1] << endl;
    cout << "arr[5] = " << arr[5] << endl;
    cout << "arr[6] = " << arr[6] << endl;

    cout << "Truy cập các biến ngoài mảng:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    return 0;
}

/* 
Output:
Truy cập các phần tử mảng có chỉ số -1, 5, 6:
arr[-1] = y
arr[5] = 
arr[6] = &
Truy cập các biến ngoài mảng:
var1 = x
var2 = y
*/
