#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a < 0) a = abs(a);
    if (b < 0) b = abs(b);

    if (a < b) swap(a,b);
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = gcd(a,b);

    a /= c;
    b /= c;

    //debug: done
    /*
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    */

   int a1 = abs(a);
   int b1 = abs(b);

   if (b == 1 || b == -1) {
    if ((a < 0 && b < 0) || (a > 0 && b > 0)) cout << a1  << endl;
    else cout << -a1 << endl;
   }

   else {
    if ((a < 0 && b < 0) || (a > 0 && b > 0)) cout << a1  << "/" << b1 << endl;
    else cout << -a1 << "/" << b1 << endl;
   }
   
    return 1;
}