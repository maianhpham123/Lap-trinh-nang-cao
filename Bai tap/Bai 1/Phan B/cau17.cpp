#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int n) {
    return (n % 4 == 0 && n % 100 != 0);
}

int main()
{
    int n;
    cout << isLeapYear(n) << endl;
    return 0;
}