# include <bits/stdc++.h>
using namespace std;

int UCLN (int a, int b) {
    if (b == 0) return a;
    int p;
    p = UCLN(b, a % b);
    return p;
}

int main()
{
    int a,b;
    cin >> a >> b;
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    cout << a / UCLN(a,b) << " " << b / UCLN(a,b) << endl;
    return 0;
}
