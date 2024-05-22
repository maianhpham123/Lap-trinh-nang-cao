#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> f(n+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]] ++;
    }

    for (int i = 1; i <= n; i++) {
        if (f[i] > 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

//VLAs: variable - length arrays, which are not part of the C++ standard
//Instead: should use VECTOR to handle dynamic array sizes