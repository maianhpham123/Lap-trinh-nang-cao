#include <iostream>
#include <string>
using namespace std;

bool isNum (int n) {
    string s = to_string(n);
    int size = s.length();
    int l = 0, r = size - 1;

    while (l <= r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a,b;
        cin >> a >> b;
        int res = 0;
        for (int i = a; i <= b; i++) {
            if (isNum(i)) res++;
        }
        cout << res << endl;
    }
    return 0;
}