#include <bits/stdc++.h>
using namespace std;

bool find(int a[], int len, int n) {
    int l = 0;
    int r = len - 1;
    
    while (l <= r) {
        int m = (l + r)/2;
        if (n == a[m]) return true;
        else if (n < a[m]) r = m - 1;
        else l = m + 1;
    }
    
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        int x = b[i];
        if (find(a, n, x)) cout << "YES" << " ";
        else cout << "NO" << " ";
    }
    return 0;
}