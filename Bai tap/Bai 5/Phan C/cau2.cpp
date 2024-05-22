#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.length();
    int l = 0, r = size - 1;

    while (l <= r) {
        if (s[l] != s[r]) {
            cout << "No" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "Yes" << endl;
    return 0;
}