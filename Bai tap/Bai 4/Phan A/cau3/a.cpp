#include <iostream>

using namespace std;

int main() {
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };

    cout << "Mang daytab1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytab1[i][j]) << " ";
        }
        cout << endl;
    }

    cout << "Mang daytab2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytab2[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}
