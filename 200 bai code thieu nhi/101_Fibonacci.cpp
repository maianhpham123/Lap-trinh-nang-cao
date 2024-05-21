#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int f0, f1;
    f0 = 0;
    f1 = 1;
    
    if (n == 1) cout << f0 << endl;
    else if (n == 2) cout << f0 << " " << f1;
    
    else {
        cout << f0 << " " << f1 << " ";
        n -= 2;
        while (n-- >= 0) {
            int fn = f0 + f1;
            cout << fn << " ";
            f0 = f1;
            f1 = fn;
        }
    }
    return 0;
}