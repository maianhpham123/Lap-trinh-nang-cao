#include <bits/stdc++.h>
using namespace std;

double distance (double x, double y) {
    return sqrt(x * x + y * y);
}

int main()
{
    double x, y;
    cin >> x >> y;
    cout << distance(x,y) << endl;
    return 0;
}