#include <iostream>

using namespace std;

int main() {
    char daytab1[2][] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    char daytab2[][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };

    cout << "Mang daytab1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (char c : daytab1[i]) {
            cout << static_cast<int>(c) << " ";
        }
        cout << endl;
    }

    cout << "Mang daytab2:" << endl;
    for (char* c : daytab2) {
        for (int i = 0; i < 12; i++) {
            cout << static_cast<int>(c[i]) << " ";
        }
        cout << endl;
    }

    return 0;
}

//trinh bien dich bi loi
