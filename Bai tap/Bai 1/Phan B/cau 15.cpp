#include <bits/stdc++.h>
using namespace std;

string FibonacciWord (int n) {
    string f0 = "a";
    string f1 = "b";
    if (n == 1) return "a";
    else if (n == 2) return "b";
    else {
        string fi;
        for (int i = 2; i <= n; i++) {
            fi = f0 + f1;
            f0 = f1;
            f1 = fi;
        }
        return fi;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << FibonacciWord(n) << endl;
    return 0; 
}