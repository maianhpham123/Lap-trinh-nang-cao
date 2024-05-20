#include <iostream>
using namespace std;

void generateBinaryString (int n, string str = "") {
    if ( n == 0) {
        cout << str << endl;
        return;
    }

    generateBinaryString(n-1, str + "0");
    generateBinaryString(n-1, str + "1");
}

int main() {
    int n;
    cin >> n;
    generateBinaryString(n);

    return 0;
}