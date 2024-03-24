#include <iostream>
using namespace std;

int main() {
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char var1 = 'x';
    char var2 = 'y';

    // Ghi tràn vào các phần tử mảng với chỉ số -1, 5, 6
    arr[-1] = 'z';
    arr[5] = 'f';
    arr[6] = 'g';

    // In giá trị của các biến được khai báo xung quanh mảng
    cout << "Giá trị của các biến sau khi ghi tràn vào mảng:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    return 0;
}

/*
Output:
Giá trị của các biến sau khi ghi tràn vào mảng:
var1 = x
var2 = z

*** stack smashing detected ***: terminated
*/
